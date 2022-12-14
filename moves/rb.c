/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:45 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 05:47:43 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_node **b, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *b;
	size = ft_lstsize(&tmp);
	if (size < 2)
		return ;
	last = ft_lstlast(*b);
	first = *b;
	last->next = first;
	(*b) = first->next;
	first->next = NULL;
	if (flag == 1)
		ft_printf("rb\n");
}
