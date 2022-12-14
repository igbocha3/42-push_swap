# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 11:59:38 by igbocha3          #+#    #+#              #
#    Updated: 2022/12/13 23:41:25 by igbocha3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef VERPOSE
.SILENT:
endif

NAME = push_swap
CC = gcc
RM = rm -f
CFLAGS	= -Wall -Wextra -Werror
C_FILES = push_swap.c\
			 utils/errors.c\
			 utils/check_arg_signs.c\
			 utils/check_empty_args.c\
			 utils/get_processed_argv.c\
			 utils/get_final_size.c\
			 utils/ft_atoi.c\
			 utils/is_string_blank.c\
			 utils/check_dublicates.c\
			 sort/sort_big_nums.c \
			 sort/move_to_top.c\
			 sort/sort_5.c\
			 sort/sort_4.c\
			 sort/sort_3.c\
			 sort/sort_2.c\
			 sort/check_sort.c\
			 sort/count_move.c\
			 sort/list_sort.c\
			 sort/sort_int_arr.c\
			 list_utils/ft_lstlast.c\
			 list_utils/find_limit_node.c\
			 list_utils/print_list.c\
			 list_utils/pre_last_node.c\
			 list_utils/del_node.c\
			 list_utils/ft_lstsize.c\
			 list_utils/ft_lstpush.c\
			 list_utils/find_node.c\
			 list_utils/reset_index.c\
			 moves/pa.c\
			 moves/pb.c\
			 moves/ra.c\
			 moves/rb.c\
			 moves/rra.c\
			 moves/rrb.c\
			 moves/sa.c\
			 moves/sb.c

O_FILES = $(C_FILES:.c=.o)
LIB = libft/libft.a
LIBFT = cd libft && make bonus

$(NAME) : $(O_FILES)
		  $(LIBFT)
	      $(CC) $(CFLAGS) -o push_swap $(O_FILES) $(LIB)

clean:
	cd libft && make re
	$(RM) $(O_FILES)

fclean: clean
	$(RM) $(NAME)

all: $(NAME)

re: fclean all

.PHONY:	all clean fclean re