/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_positions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naadam <naadam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:59:06 by naadam            #+#    #+#             */
/*   Updated: 2023/10/10 17:49:21 by naadam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign(t_list **stack)
{
	int		pos;
	t_list	*temp;

	pos = 0;
	temp = *stack;
	while (temp)
	{
		temp->pos = pos++;
		temp = temp->next;
	}
	return ;
}
