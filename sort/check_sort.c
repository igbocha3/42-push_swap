/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:07:18 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 00:56:51 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(t_node **head)
{
	t_node	*temp;

	temp = *head;
	while (temp->next != NULL)
	{
		if (temp->data >= temp->next->data)
			return (-1);
		temp = temp->next;
	}
	return (0);
}
