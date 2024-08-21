/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:02:57 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:02:57 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **stack)
{
	t_list	*head;
	int		tmp_value;
	int		tmp_index;

	head = *stack;
	tmp_value = head->value;
	tmp_index = head->index;
	if (ft_lstsize(*stack) < 2)
		return (-1);
	head->value = head->next->value;
	head->index = head->next->index;
	head->next->value = tmp_value;
	head->next->index = tmp_index;
	return (0);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putstr_fd("sa\n", 1);
	return (0);
}

int	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*nodetb_pushd;

	nodetb_pushd = *stack_from;
	if (ft_lstsize(nodetb_pushd) < 0)
		return (-1);
	*stack_from = nodetb_pushd->next;
	nodetb_pushd->next = NULL; 
	ft_lstadd_front(stack_to, nodetb_pushd);
	return (0);
}
