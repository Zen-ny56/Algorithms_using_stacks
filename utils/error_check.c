/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:07:15 by naadam            #+#    #+#             */
/*   Updated: 2023/10/22 21:28:01 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_num(char *a)
{
	int	i;

	i = 0;
	while (a[i] != 0)
	{
		if (ft_isdigit(a[i]) == 0)
			return (false);
		if ((a[i] >= 48 && a[i] <= 57) && a[i + 1]
			&& (a[i + 1] == '-' || a[i + 1] == '+'))
			return (false);
		if ((a[i] == '+' || a[i] == '-')
			&& (!(a[i + 1] >= 48 && a[i + 1] <= 57)))
			return (false);
		i++;
	}
	return (true);
}

bool	isempty(char *argv)
{
	long int	i;

	i = 0;
	if (ft_strlen(argv) == 0)
		return (true);
	while (argv[i] != '\0')
	{
		if (argv[i] != ' ')
			return (false);
		i++;
	}
	return (true);
}

void	isempty_string(char **arguments)
{
	int	i;

	i = 1;
	while (arguments[i] != NULL)
	{
		if (isempty(arguments[i]) == true)
			ft_error();
		i++;
	}
}
