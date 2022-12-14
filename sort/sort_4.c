/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:10:30 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/14 00:06:44 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_4(t_node **a, t_node **b, t_move *move)
{
	move_to_top_min(move, a);
	reset_index(a);
	pb(a, b);
	del_node(a);
	sort_3(a);
	pa(a, b);
}
