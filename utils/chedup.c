/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chedup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:06:35 by naadam            #+#    #+#             */
/*   Updated: 2023/09/26 18:06:37 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_dup(t_list **stack_a)
{
	t_list	*temp;
	t_list	*sec;

	temp = *stack_a;
	while (temp != NULL)
	{
		sec = temp->next;
		while (sec != NULL)
		{
			if (sec->value == temp->value)
				return (false);
			sec = sec->next;
		}
		temp = temp->next;
	}
	return (true);
}
