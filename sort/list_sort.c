/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:10:08 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/14 00:08:54 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// arr[0] - chunk size
// arr[1] - list size
// arr[2] - temp for median

#include "../push_swap.h"

int	chunk_count(int size_a)
{
	if (size_a <= 250)
		return (30);
	else
		return (50);
}

void	list_sort(t_node *a, t_node *b, int size)
{
	t_move	move;
	int		arr[3];

	if (check_sort(&a) == 0)
	{
		free_list(&a);
		exit(1);
	}
	if (size == 2)
		sort_2(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size == 4)
		sort_4(&a, &b, &move);
	else if (size == 5)
		sort_5(&a, &b, &move);
	else
	{
		arr[0] = chunk_count(ft_lstsize(&a));
		arr[1] = ft_lstsize(&a);
		arr[2] = arr[0];
		sort_big_nums(&a, &b, &move, arr);
	}
	free_list(&a);
}
