/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:00:05 by haghouli          #+#    #+#             */
/*   Updated: 2022/12/27 06:15:38 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"
#include "./gnl/get_next_line.h"

static void	free_stacks(t_stack **stack_a, t_stack **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

void	p1(t_stack **stack_a, t_stack **stack_b, char *str)
{
	if (!ft_strcmp("sa\n", str))
		swap(stack_a);
	else if (!ft_strcmp("sb\n", str))
		swap(stack_b);
	else if (!ft_strcmp("ss\n", str))
		swap_ab(stack_b, stack_b);
	else if (!ft_strcmp("pa\n", str))
		push(stack_a, stack_b);
	else if (!ft_strcmp("pb\n", str))
		push(stack_b, stack_a);
	else if (!ft_strcmp("ra\n", str))
		rotate(stack_a);
}

void	p2(t_stack **stack_a, t_stack **stack_b, char *str)
{
	if (!ft_strcmp("rb\n", str))
		rotate(stack_b);
	else if (!ft_strcmp("rra\n", str))
		reverse_rotate(stack_a);
	else if (!ft_strcmp("rrb\n", str))
		reverse_rotate(stack_b);
	else if (!ft_strcmp("rr\n", str))
		rotate_ab(stack_a, stack_b);
	else if (!ft_strcmp("rrr\n", str))
		reverse_rotate_ab(stack_a, stack_b);
}

int	checkes(t_stack **stack_a, t_stack **stack_b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		if (!ft_strcmp("sa\n", str) || !ft_strcmp("sb\n",
				str) || !ft_strcmp("pb\n", str) || !ft_strcmp("pa\n", str)
			|| !ft_strcmp("ra\n", str) || !ft_strcmp("ss\n", str))
			p1(stack_a, stack_b, str);
		else if (!ft_strcmp("rb\n", str) || !ft_strcmp("rra\n", str)
			|| !ft_strcmp("rrb\n", str) || !ft_strcmp("rr\n", str)
			|| !ft_strcmp("rrr\n", str))
			p2(stack_a, stack_b, str);
		else
			return (ft_putstr("Error\n"), 0);
		free(str);
	}
	return (1);
}

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac <= 1)
		return (0);
	if (!fill_stack(&stack_a, av, ac) || is_error_bonus(stack_a))
	{
		ft_lstclear(&stack_a);
		return (0);
	}
	if (checkes(&stack_a, &stack_b))
	{
		if (is_sorted(stack_a) && stack_b == NULL)
			ft_putstr("OK\n");
		else
			ft_putstr("KO\n");
	}
	free_stacks(&stack_a, &stack_b);
	return (0);
}
