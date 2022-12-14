/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:49 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 05:48:30 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_node **b, int flag)
{
	t_node	*pre_last;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *b;
	size = ft_lstsize(&tmp);
	if (size < 2)
		return ;
	last = ft_lstlast(*b);
	pre_last = ft_lstprelast_ps(*b);
	pre_last->next = NULL;
	last->next = *b;
	(*b) = last;
	if (flag == 1)
		ft_printf("rrb\n");
}
