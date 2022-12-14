/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:10:24 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/14 00:07:05 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//	2	3	3	1	2		
//	1	2	1	3	3		
//	3	1	2	2	1		

void	sort_3(t_node **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->data;
	y = (*a)->next->data;
	z = (*a)->next->next->data;
	if ((x > y) && (x < z) && (y < z))
		sa(*a, 1);
	else if ((x > y) && (y > z))
	{
		sa(*a, 1);
		rra(a, 1);
	}
	else if ((x > y) && (x > z) && (y < z))
		ra(a, 1);
	else if ((x < y) && (x < z) && (y > z))
	{
		sa(*a, 1);
		ra(a, 1);
	}
	else if ((x < y) && (x > z) && (y > z))
		rra(a, 1);
}
