/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addutils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:06:17 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:06:19 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != 0)
		write(fd, s, ft_strlen(s));
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*s1;

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	s1 = malloc(count * size);
	if (!s1)
		return (NULL);
	ft_memset(s1, 0, count * size);
	return (s1);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = (unsigned char) c;
		i++;
	}
	return ((void *)str);
}
