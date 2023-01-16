/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:48:31 by haghouli          #+#    #+#             */
/*   Updated: 2022/12/26 08:03:49 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/push_swap.h"

void	free_stacks(t_stack **stack_a, t_stack **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

void	check_and_roll(t_stack **stack_a, t_stack **stack_b, int *c, int n)
{
	if (*c == 0 || (*stack_b)->content > ft_lstlast(*stack_a)->content)
	{
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		(*c)++;
	}
	else if (content_location(*stack_b, n) <= (ft_lstsize(*stack_b) - 1) / 2)
		rotate_b(stack_b);
	else
		reverse_rotate_b(stack_b);
}

void	roll_a(t_stack **stack_a, int *count, int *i)
{
	reverse_rotate_a(stack_a);
	(*count)--;
	(*i)--;
}

void	sort_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int	count;
	int	i;
	int	*arr;

	arr = cpy_to_array(*stack_b);
	count = 0;
	i = ft_lstsize(*stack_b) - 1;
	while (*stack_b)
	{
		if (check_bigest_value((*stack_b), arr[i]))
		{
			if ((*stack_b)->content == arr[i])
			{
				push_a(stack_a, stack_b);
				i--;
			}
			else
				check_and_roll(stack_a, stack_b, &count, arr[i]);
		}
		else
			roll_a(stack_a, &count, &i);
	}
	while (count-- > 0)
		reverse_rotate_a(stack_a);
	free(arr);
}

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (!fill_stack(&stack_a, av, ac) || is_error(stack_a))
		return (ft_lstclear(&stack_a), 0);
	index_lst(stack_a);
	if (ft_lstsize(stack_a) == 2 && is_sorted_dec(stack_a))
		swap_a(&stack_a);
	else if (ft_lstsize(stack_a) == 3)
		lthree_sort(&stack_a);
	else if (ft_lstsize(stack_a) <= 5)
		lfive_sort(&stack_a, &stack_b);
	else if (ft_lstsize(stack_a) <= 100)
		push_shunckes(&stack_a, &stack_b, 4);
	else
		push_shunckes(&stack_a, &stack_b, 10);
	sort_to_a(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
	return (0);
}
