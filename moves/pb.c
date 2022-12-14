/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:41 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 05:29:45 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node **a, t_node **b)
{
	int		size;
	t_node	*tmp;
	t_node	*temp;

	tmp = *a;
	temp = *a;
	size = ft_lstsize(&tmp);
	if (size == 0)
		return ;
	ft_lstpush(b, temp->data, 0, temp->pos);
	ft_printf("pb\n");
}
