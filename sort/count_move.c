/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:07:23 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 05:25:28 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_move(t_move *move, int size, int index)
{
	int	top;
	int	bottom;

	top = index - 1;
	bottom = size - index + 1;
	if (top < bottom)
	{
		move->step = top;
		move->route = 1;
	}
	else
	{
		move->step = bottom;
		move->route = 0;
	}
	return (move->step);
}
