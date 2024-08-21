/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:01:16 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:01:18 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialise_processor(t_list	*stack_a)
{
	t_list	*head;

	head = stack_a;
	while (head)
	{
		head->processed = 0;
		head = head->next;
	}
}

void	index_stack(t_list **stack_a)
{
	t_list	*head;
	t_list	*min;
	t_list	*current;
	int		index;
	int		count;

	head = *stack_a;
	index = 0;
	count = ft_lstsize(head);
	initialise_processor(head);
	while (count > 0)
	{
		current = head;
		min = NULL;
		while (current)
		{
			if (current->processed == 0 && 
				(!min || current->value < min->value))
				min = current;
			current = current->next;
		}
		min->index = index++;
		min->processed = 1;
		count--;
	}
}
