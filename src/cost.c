/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:00:02 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:00:02 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_cost(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_a;
	int		forward;
	int		backwards;

	temp_a = *stack_a;
	while (temp_a)
	{
		forward = temp_a->pos;
		backwards = ft_lstsize(*stack_a) - forward;
		if (backwards < forward)
			temp_a->cost_a = backwards;
		else
			temp_a->cost_a = forward;
		temp_a = temp_a->next;
	}
	costforb(stack_b);
}

void	costforb(t_list **stack_b)
{
	t_list	*temp_b;
	int		forward;
	int		backwards;

	temp_b = *stack_b;
	while (temp_b)
	{
		forward = temp_b->pos;
		backwards = ft_lstsize(*stack_b) - forward;
		if (backwards < forward)
			temp_b->cost_b = backwards;
		else
			temp_b->cost_b = forward;
		temp_b = temp_b->next;
	}
}
