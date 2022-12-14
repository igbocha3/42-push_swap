/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:05:57 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/12 05:52:41 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_node(t_node **head, int data)
{
	t_node	*temp;

	temp = *head;
	while (temp != NULL)
	{
		if (temp->data == data)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

void	set_positions(t_node **head, int *arr, int size)
{
	t_node	*temp;
	int		i;

	i = 0;
	while (i < size)
	{
		temp = find_node(head, arr[i]);
		temp->pos = i + 1;
		i++;
	}
}
