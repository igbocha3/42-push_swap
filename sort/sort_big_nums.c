/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:10:45 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/14 00:07:50 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_back(t_node **a, t_node **b)
{
	int		size_b;
	t_move	move;

	size_b = ft_lstsize(b);
	while (size_b > 0)
	{
		move_to_top_max(&move, b);
		pa(a, b);
		size_b--;
	}
}

void	sort_big_nums(t_node **a, t_node **b, t_move *move, int *arr)
{
	t_node	*start_a;

	start_a = *a;
	while (arr[1] > 0)
	{
		if (start_a->pos <= arr[0])
		{
			move_to_top_cur(move, a, start_a->pos);
			pb (a, b);
			if (start_a->pos < (arr[0] - (arr[2] / 2)))
				rb(b, 1);
			start_a = start_a->next;
			del_node(a);
			arr[1]--;
		}
		else
			start_a = start_a->next;
		if (start_a == NULL)
		{
			start_a = *a;
			arr[0] += arr[2];
		}
	}
	push_back(a, b);
}
