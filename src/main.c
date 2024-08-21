/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:03:05 by naadam            #+#    #+#             */
/*   Updated: 2024/08/21 18:13:57 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize((*stack_a)) == 2)
		sa(stack_a);
	if (ft_lstsize((*stack_a)) == 3)
		sort_tatu(stack_a);
	if (ft_lstsize((*stack_a)) > 3)
		sort_large(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a; 
	t_list	**stack_b;
	char	**arguments;

	if (argc < 2)
		ft_error();
	isempty_string(argv);
	arguments = check_arguments(argc, argv);
	stack_a = (t_list **)ft_calloc(1, sizeof(t_list));
	stack_b = (t_list **)ft_calloc(1, sizeof(t_list));
	init_stack(stack_a, stack_b, arguments);
	if (!stack_a || !stack_b)
		return (0);
	if (check_sorted(stack_a) == 0)
	{
		free_tda(arguments);
		free_stack(stack_a);
		free_stack(stack_b);
		exit(0);
	}
	sort(stack_a, stack_b);
	free_tda(arguments);
	free_stack(stack_a);
	free_stack(stack_b);
	exit(0);
}
