/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midpoint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:00:23 by naadam            #+#    #+#             */
/*   Updated: 2024/08/21 18:37:10 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list **stack_a, t_list **stack_b)
{
	t_list *temp = *stack_a;
	t_list *tme = *stack_b;
	printf("Stack A \n");
	while (temp)
	{
		printf("%d\n", temp->index);
		temp = temp->next;
	}
	printf("Stack B \n");
	while (tme)
	{
		printf("%d\n", tme->index);
		tme = tme->next;
	}
}
int	find_midpoint(t_list *stack)
{
	int		sum;
	int		i;

	sum = 0;
	i = 0;
	while (stack)
	{
		sum += stack->index;
		i++;
		stack = stack->next;
	}
	if (sum % i == 0)
		return (sum / i);
	else
		return ((sum / i) + 1);
}

void	push_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes, int *i)
{
	pb(stack_a, stack_b);
	(*total_nodes)--;
	(*i)--;
}

void	send_to_b(t_list **stack_a, t_list **stack_b, int *total_nodes)
{
	int		mid;
	int		i;

	mid = find_midpoint(*stack_a);
	i = ((*total_nodes) / 2) + 1;
	while (i > 0)
	{
		if ((*stack_a)->index < mid)
			push_to_b(stack_a, stack_b, total_nodes, &i);
		else if (ft_lstlast(*stack_a)->index < mid)
		{
			rra(stack_a);
			push_to_b(stack_a, stack_b, total_nodes, &i);
		}
		else
			ra(stack_a);
	}
}

void	send_to_b_by_midpoint(t_list **stack_a, t_list **stack_b)
{
	int	total_nodes;

	total_nodes = ft_lstsize(*stack_a) - 3;
	while (total_nodes > 0)
		send_to_b(stack_a, stack_b, &total_nodes);
	if (check_sorted(stack_a) == 1)
		sort_tatu(stack_a);
	// print_stack(stack_a, stack_b);
	// exit(0);
}
