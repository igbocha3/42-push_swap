/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:05:03 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/14 00:14:58 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "errno.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_node {
	int				data;
	int				index;
	int				pos;
	struct s_node	*next;
}	t_node;

typedef struct s_move {
	int	step;
	int	route;
}	t_move;

int			check_sort(t_node **head);
int			ft_lstsize(t_node **head);
int			is_string_blank(char *str);
int			find_max_node(t_node **head);
int			find_min_node(t_node **head);
int			get_final_size(char **final_argv);
int			check_dublicates(int *arr, int size);
int			count_move(t_move *move, int size, int index);
int			ft_atoi(char *str, char **final_argv, int *arr, int index);

void		error(void);
void		sort_2(t_node **a);
void		sort_3(t_node **a);
void		print_list(t_node **a);
void		del_node(t_node **head);
void		sa(t_node *a, int flag);
void		sb(t_node *b, int flag);
void		ra(t_node **a, int flag);
void		rb(t_node **b, int flag);
void		rra(t_node **a, int flag);
void		rrb(t_node **b, int flag);
void		pa(t_node **a, t_node **b);
void		pb(t_node **a, t_node **b);
void		free_list(t_node **head);
void		reset_index(t_node **head);
void		check_arg_signs(char **argv);
void		free_argv_memory(char **argv);
void		sort_int_arr(int *tab, int size);
char		**split_argv(int argc, char **argv);
void		check_empty_args(int argc, char **argv);
void		free_complex(int *arr, char **final_argv);
void		list_sort(t_node *a, t_node *b, int size);
char		**get_processed_argv(int argc, char **argv);
void		sort_4(t_node **a, t_node **b, t_move *move);
void		sort_5(t_node **a, t_node **b, t_move *move);
void		move_to_top_min(t_move *move, t_node **head);
void		move_to_top_max(t_move *move, t_node **head);
void		set_positions(t_node **head, int *arr, int size);
void		free_error(int *arr, char **final_argv, int index);
void		move_to_top_cur(t_move *move, t_node **a, int pos);
void		ft_lstpush(t_node **head, int data, int index, int pos);
void		sort_big_nums(t_node **a, t_node **b, t_move *move, int *arr);
void		prepare_and_sort(t_node *a, t_node *b, char **final_argv, int size);

t_node		*ft_lstlast(t_node *lst);
t_node		*ft_lstprelast_ps(t_node *lst);
t_node		*find_node(t_node **head, int data);

#endif