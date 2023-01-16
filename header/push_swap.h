/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:46:46 by haghouli          #+#    #+#             */
/*   Updated: 2022/12/26 15:22:56 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

/************************ rules  ************************/
void				swap(t_stack **stack);
void				swap_a(t_stack **stack);
void				swap_b(t_stack **stack);
void				swap_ab(t_stack **stack_a, t_stack **stack_b);

void				push(t_stack **stack_a, t_stack **stack_b);
void				push_a(t_stack **stack_a, t_stack **stack_b);
void				push_b(t_stack **stack_a, t_stack **stack_b);

void				rotate(t_stack **stack);
void				rotate_a(t_stack **stack);
void				rotate_b(t_stack **stack);
void				rotate_ab(t_stack **stack_a, t_stack **stack_b);

void				reverse_rotate(t_stack **stack);
void				reverse_rotate_a(t_stack **stack);
void				reverse_rotate_b(t_stack **stack);
void				reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);

/************************ sorts  ************************/
void				sort(int *t_stack, int end);
void				lthree_sort(t_stack **stack);
void				lfive_sort(t_stack **stack_a, t_stack **stack_b);

/************************ lst  ************************/
t_stack				*ft_lstnew(int content);
void				ft_lstadd_front(t_stack **lst, t_stack *new);
int					ft_lstsize(t_stack *lst);
t_stack				*ft_lstlast(t_stack *lst);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
void				ft_lstclear(t_stack **lst);

/************************ utiles  ************************/
long				ft_atoi(const char *str);
int					is_dup(t_stack *stack);
int					is_sorted(t_stack *stack);
int					is_int(char *str);
void				ft_putstr(char *str);
int					*ft_cpy_and_get_middle(t_stack *stack);
int					*cpy_to_array(t_stack *stack);

int					find_max(t_stack *stack);
int					find_min(t_stack *stack);

int					is_error(t_stack *stack);
int					fill_stack(t_stack **stack, char **av, int ac);
int					is_sorted_dec(t_stack *stack);
int					is_error_bonus(t_stack *stack);

void				push_shunckes(t_stack **stack_a, t_stack **stack_b,
						int div);

void				index_lst(t_stack *stack);
char				check_bigest_value(t_stack *p, int nb);
int					get_index(t_stack *stack, int num);
int					content_location(t_stack *stack, int content);

#endif