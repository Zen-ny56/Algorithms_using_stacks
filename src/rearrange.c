/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rearrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:05:42 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:05:42 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rearrange(t_list **a, t_list **b, t_list *cheapest, t_list *target)
{
	if (cheapest->pos > 0 && target->pos > 0)
		rearrange_both(a, b, target, cheapest);
	if (target->pos > 0)
		rearrange_a(a, target);
	if (cheapest->pos > 0)
		rearrange_b(b, cheapest);
}

int	whole(t_list *stack)
{
	return (ft_lstsize(stack) / 2);
}

t_list	*retrieve_target_for_cheapest(t_list **a, t_list *ch)
{
	t_list	*temp_a;
	int		min_diff;
	int		diff;
	t_list	*target;

	target = 0;
	min_diff = INT_MAX;
	temp_a = *a;
	while (temp_a)
	{
		diff = temp_a->index - ch->index;
		if (diff > 0 && diff < min_diff)
		{
			min_diff = diff;
			target = temp_a;
		}
		temp_a = temp_a->next;
	}
	return (target);
}
