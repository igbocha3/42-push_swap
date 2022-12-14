/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:23 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 23:54:19 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_node **a)
{
	t_node	*temp;

	if (!a)
		return ;
	temp = *a;
	ft_printf("\n\nSorted List:\n");
	while (temp != NULL)
	{
		ft_printf("%d ", temp->data);
		temp = temp->next;
	}
}
