/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:56:08 by haghouli          #+#    #+#             */
/*   Updated: 2022/12/24 12:40:21 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

char	check_bigest_value(t_stack *p, int nb)
{
	while (p != NULL)
	{
		if (p->content == nb)
			return (1);
		p = p->next;
	}
	return (0);
}

int	get_index(t_stack *stack, int num)
{
	while (stack != NULL)
	{
		if (num == stack->content)
			return (stack->index);
		stack = stack->next;
	}
	return (0);
}

int	content_location(t_stack *stack, int content)
{
	int	i;

	i = 0;
	while (content != stack->content)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
