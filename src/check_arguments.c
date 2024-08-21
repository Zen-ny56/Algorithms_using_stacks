/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:00:19 by naadam            #+#    #+#             */
/*   Updated: 2023/10/11 17:18:34 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**check_arguments(int argc, char **argv)
{
	char	**arguments;
	char	*args;
	int		i;

	i = 1;
	args = (char *)ft_calloc(sizeof(char), 1);
	while (argv[i] != NULL)
	{
		if (argc == 2)
		{
			free(args);
			args = ft_strdup(argv[i]);
		}
		else
		{
			args = ft_strjoin(args, " ");
			args = ft_strjoin(args, argv[i]);
		}
		i++;
	}
	validate_args(args);
	arguments = ft_split(args, 32);
	free(args);
	return (arguments);
}

void	validate_args(char *args)
{
	if (is_num(args) == false)
	{
		free(args);
		ft_error();
	}
}
