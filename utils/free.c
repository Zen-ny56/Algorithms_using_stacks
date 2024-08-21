/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:07:26 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:07:26 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tda(char **args)
{
	int	i;

	i = 0;
	if (args == NULL)
		return ;
	while (args[i] != NULL)
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	free_error(char **args)
{
	free_tda(args);
	ft_error();
}

void	free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*save;

	head = *stack;
	while (head != NULL)
	{
		save = head->next;
		free(head);
		head = save;
	}
	free(stack);
}
