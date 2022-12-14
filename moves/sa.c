/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:55 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 04:44:50 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node *a, int flag)
{
	int		temp;
	int		size;
	t_node	*tmp;

	tmp = a;
	size = ft_lstsize(&tmp);
	if (size < 2)
		return ;
	temp = a->data;
	a->data = a->next->data;
	a->next->data = temp;
	temp = a->pos;
	a->pos = a->next->pos;
	a->next->pos = temp;
	if (flag == 1)
		ft_printf("sa\n");
}
