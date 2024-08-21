/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rearrange_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:04:55 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:04:55 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rearrange_both(t_list **a, t_list **b, t_list *target, t_list *cheapest)
{
	if (cheapest->pos >= whole(*b) && target->pos >= whole(*a))
	{
		while (*a != target && *b != cheapest)
			rrr(a, b);
	}
	else if (cheapest->pos <= whole(*b) && target->pos <= whole(*a))
	{
		while (*a != target && *b != cheapest)
			rr(a, b);
	}
}

void	rearrange_a(t_list **a, t_list *target)
{
	if (target->pos >= whole(*a))
	{
		while (*a != target)
			rra(a);
	}
	else if (target->pos <= whole(*a))
	{
		while (*a != target)
			ra(a);
	}
}

void	rearrange_b(t_list **b, t_list *cheapest)
{
	if (cheapest->pos >= whole(*b))
	{
		while (*b != cheapest)
			rrb(b);
	}
	else if (cheapest->pos <= whole(*b))
	{
		while (*b != cheapest)
			rb(b);
	}
}

int	retrieve_cost_for_cheapest(t_list *stack, int cheapest_pos)
{
	t_list	*temp;

	temp = stack;
	while (temp)
	{
		if (temp->pos == cheapest_pos)
			return (temp->cost_b);
		temp = temp->next;
	}
	return (-1);
}
