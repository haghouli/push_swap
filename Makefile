# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 10:55:26 by haghouli          #+#    #+#              #
#    Updated: 2022/12/27 06:33:41 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= 	push_swap
CHECKER_NAME 	= checker
CC				= 	cc
CFLAGS			= 	-Wall -Wextra -Werror

FILES			= ./rules/push.c \
				./rules/swap.c \
				./rules/rotate.c \
				./rules/reverse_rotate.c \
				./utiles/is_dup.c \
				./utiles/ft_atoi.c \
				./utiles/is_sorted.c \
				./utiles/is_int.c \
				./utiles/is_error.c \
				./utiles/ft_putstr.c \
				./utiles/fill_stack.c \
				./lst/lst_op.c \
				./utiles/ft_cpy.c \
				./utiles/find_max.c \
				./utiles/find_min.c \
				./utiles/is_sorted_dec.c \
				./sorts/lthree_sort.c \
				./sorts/sort.c \
				./sorts/lfive_sort.c \
				./utiles/index_lst.c \
				./utiles/push_shunkes.c \
				./lst/ft_lstclear.c \
				./utiles/helpers.c \

B_FILES 		= ./bonus/gnl/get_next_line.c \
				./bonus/gnl/get_next_line_utils.c \
				./bonus/ft_strcmp.c \

OBJS			= $(FILES:.c=.o)
B_OBJS			= $(B_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) push_swap.c $(OBJS) -o $(NAME)

bonus : $(OBJS) $(B_OBJS)
	$(CC) $(CFLAGS) ./bonus/checker.c $(OBJS) $(B_OBJS) -o $(CHECKER_NAME)

clean :
	rm -f $(OBJS) $(B_OBJS)

fclean : clean
	rm -f $(NAME) $(CHECKER_NAME)

re : fclean all


