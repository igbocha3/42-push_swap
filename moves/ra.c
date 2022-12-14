/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:45 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 05:05:41 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **a, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *a;
	size = ft_lstsize(&tmp);
	if (size < 2)
		return ;
	last = ft_lstlast(*a);
	first = *a;
	last->next = first;
	(*a) = first->next;
	first->next = NULL;
	if (flag == 1)
		ft_printf("ra\n");
}
