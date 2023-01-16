/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:35:04 by haghouli          #+#    #+#             */
/*   Updated: 2022/12/25 08:41:39 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*lst;

	if (ft_lstsize(*stack) <= 1)
		return ;
	tmp = *stack;
	lst = (*stack)->next;
	tmp->next = lst->next;
	lst->next = tmp;
	*stack = lst;
}

void	swap_a(t_stack **stack)
{
	swap(stack);
	ft_putstr("sa\n");
}

void	swap_b(t_stack **stack)
{
	swap(stack);
	ft_putstr("sb\n");
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
