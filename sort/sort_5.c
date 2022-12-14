/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:10:35 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/14 00:06:39 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_node **a, t_node **b, t_move *move)
{
	int	i;

	i = 0;
	while (i++ < 2)
	{
		move_to_top_min(move, a);
		pb(a, b);
		del_node(a);
		reset_index(a);
	}
	sort_3(a);
	if (check_sort(b) == 0)
		sb(*b, 1);
	pa(a, b);
	pa(a, b);
}
