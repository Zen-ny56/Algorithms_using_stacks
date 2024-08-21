/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:02:00 by naadam            #+#    #+#             */
/*   Updated: 2023/10/11 15:09:12 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_list **stack_a, t_list **stack_b, char **arguments)
{
	int		i;
	int		value;
	t_list	*new;

	i = 0;
	while (arguments[i] != 0)
	{
		value = ft_atoi(arguments[i], stack_a, stack_b, arguments);
		new = ft_lstnew(value);
		ft_lstadd_back(stack_a, new);
		i++;
	}
	if (check_dup(stack_a) == false)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		free_tda(arguments);
		ft_error();
	}
	index_stack(stack_a);
}
