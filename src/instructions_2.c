/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:02:46 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:02:48 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_list **stack_b, t_list **stack_a)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putstr_fd("pa\n", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putstr_fd("pb\n", 1);
	return (0);
}

int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize((*stack)) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putstr_fd("ra\n", 1);
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putstr_fd("rb\n", 1);
	return (0);
}
