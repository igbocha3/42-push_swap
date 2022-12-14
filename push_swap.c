/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:04:46 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/13 23:47:33 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prepare_and_sort(t_node *a, t_node *b, char **final_argv, int size)
{
	int		*arr;
	int		i;

	arr = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		arr[i] = ft_atoi(final_argv[i], final_argv, arr, i);
		free(final_argv[i++]);
	}
	i = size - 1;
	while (i >= 0)
		ft_lstpush(&a, arr[i--], 0, 0);
	reset_index(&a);
	if (check_dublicates(arr, size) == 1)
	{
		free_complex(arr, final_argv);
		free_list(&a);
		error();
	}
	sort_int_arr(arr, size);
	set_positions(&a, arr, size);
	free_complex(arr, final_argv);
	list_sort(a, b, size);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;
	char	**final_argv;

	a = NULL;
	b = NULL;
	check_empty_args(argc, argv);
	check_arg_signs(argv);
	final_argv = get_processed_argv(argc, argv);
	free_argv_memory(argv);
	if (!final_argv)
		return (0);
	size = get_final_size(final_argv);
	prepare_and_sort(a, b, final_argv, size);
	return (0);
}
