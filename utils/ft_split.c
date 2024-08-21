/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:09:19 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:09:21 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_countstr(char const *s, char c)
{
	int	i;
	int	strc;

	i = 0;
	strc = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (i != 0 && s[i] == c && s[i - 1] != c && s[i - 1] != '\0')
			strc++;
		i++;
	}
	if (s[i] == '\0' && s[i - 1] != c)
		strc++;
	return (strc);
}

char	*malloc_str(const char *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		w;

	w = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc((ft_countstr(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			str[w] = malloc_str(s, c);
			w++;
			while (*s != c && *s)
				s++;
		}
	}
	str[w] = NULL;
	return (str);
}
