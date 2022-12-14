/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_limit_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:05:52 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 23:48:36 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max_node(t_node **head)
{
	int		max_node;
	t_node	*current;

	max_node = (*head)->data;
	current = *head;
	while (current != NULL)
	{
		if (max_node < current->data)
			max_node = current->data;
		current = current->next;
	}	
	return (max_node);
}

int	find_min_node(t_node **head)
{
	int		min_node;
	t_node	*current;

	min_node = (*head)->data;
	current = *head;
	while (current != NULL)
	{
		if (min_node > current->data)
			min_node = current->data;
		current = current->next;
	}	
	return (min_node);
}
