/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:05:24 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/12 04:04:17 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	free_argv_memory(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
}

void	free_error(int *arr, char **final_argv, int index)
{
	int	size;

	free(arr);
	size = get_final_size(final_argv);
	while (index < size)
	{
		free(final_argv[index]);
		index++;
	}
	free(final_argv);
	error();
}

void	free_complex(int *arr, char **final_argv)
{
	free(arr);
	free(final_argv);
}

void	free_list(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		del_node(head);
		tmp = *head;
	}
}
