/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:55 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 05:46:35 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_node *b, int flag)
{
	int		temp;
	int		size;
	t_node	*tmp;

	tmp = b;
	size = ft_lstsize(&tmp);
	if (size < 2)
		return ;
	temp = b->data;
	b->data = b->next->data;
	b->next->data = temp;
	temp = b->pos;
	b->pos = b->next->pos;
	b->next->pos = temp;
	if (flag == 1)
		ft_printf("sb\n");
}
