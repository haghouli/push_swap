/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 07:55:26 by haghouli          #+#    #+#             */
/*   Updated: 2022/12/25 08:26:03 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	index_lst(t_stack *stack)
{
	int		i;
	t_stack	*tmp;
	int		size;
	int		*lst;

	i = 0;
	tmp = stack;
	size = ft_lstsize(tmp);
	lst = cpy_to_array(stack);
	while (i < size)
	{
		tmp = stack;
		while (tmp != NULL)
		{
			if (lst[i] == tmp->content)
				tmp->index = i;
			tmp = tmp->next;
		}
		i++;
	}
	free (lst);
}
