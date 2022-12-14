/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:06:13 by igbocha3          #+#    #+#             */
/*   Updated: 2022/10/16 13:28:41 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_node **head)
{
	int		size;
	t_node	*current;

	size = 0;
	current = *head;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
