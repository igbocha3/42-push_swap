/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:10:14 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 22:50:10 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_to_top_min(t_move *move, t_node **head)
{
	int		len;
	int		min_data;
	t_node	*min;
	t_node	*temp;
	t_node	*current;

	temp = *head;
	min = *head;
	current = *head;
	len = ft_lstsize(&temp);
	min_data = find_min_node(&min);
	while (current->data != min_data)
		current = current->next;
	if (count_move(move, len, current->index) > 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				ra(head, 1);
			else
				rra(head, 1);
			move->step--;
		}
	}
}

void	move_to_top_max(t_move *move, t_node **head)
{
	int		len;
	int		max_data;
	t_node	*max;
	t_node	*temp;
	t_node	*current;

	temp = *head;
	max = *head;
	current = *head;
	reset_index(head);
	len = ft_lstsize(&temp);
	max_data = find_max_node(&max);
	while (current->data != max_data)
		current = current->next;
	if (count_move(move, len, current->index) > 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				rb(head, 1);
			else
				rrb(head, 1);
			move->step--;
		}
	}
}

void	move_to_top_cur(t_move *move, t_node **a, int pos)
{
	int		len;
	t_node	*current;
	t_node	*temp;

	reset_index(a);
	temp = *a;
	current = *a;
	len = ft_lstsize(&temp);
	while (current->pos != pos)
		current = current->next;
	if (count_move(move, len, current->index) > 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				ra(a, 1);
			else
				rra(a, 1);
			move->step--;
		}
	}
}
