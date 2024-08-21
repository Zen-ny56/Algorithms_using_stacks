/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:07:33 by naadam            #+#    #+#             */
/*   Updated: 2023/09/28 20:14:43 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str, t_list **stack_a, t_list **stack_b, char **argv)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		if (result * sign > 2147483647)
			atoi_error(stack_a, stack_b, argv);
		else if (result * sign < -2147483648)
			atoi_error(stack_a, stack_b, argv);
		i++;
	}
	return (result * sign);
}

void	atoi_error(t_list **stack_a, t_list **stack_b, char **argv)
{
	free_stack(stack_a);
	free_stack(stack_b);
	free_tda(argv);
	ft_error();
}
