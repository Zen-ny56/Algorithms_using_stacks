/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:08:09 by naadam            #+#    #+#             */
/*   Updated: 2023/10/11 15:16:33 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int a)
{
	if ((a >= 48 && a <= 57) || (a == '+' || a == '-' || a == 32))
		return (1);
	else
		return (0);
}

char	*ft_strdup(char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len * sizeof(char));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*jo;

	if (!s1)
	{
		s1 = malloc(sizeof(char *) * 1);
		s1[0] = '\0';
	}
	jo = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!jo)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		jo[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		jo[i++] = s2[j++];
	jo[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (jo);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
