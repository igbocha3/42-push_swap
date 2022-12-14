/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_processed_argv.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:07:12 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/12 04:05:26 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**split_argv(int argc, char **argv)
{
	int		i;
	char	*str;
	char	**arr;

	str = NULL;
	i = 1;
	if (argc == 2)
		arr = ft_split(argv[i], ' ');
	else
	{
		while (i < argc)
		{
			str = ft_strjoin(str, argv[i]);
			str = ft_strjoin(str, " ");
			i++;
		}
		arr = ft_split(str, ' ');
		free(str);
	}
	return (arr);
}

char	**get_processed_argv(int argc, char **argv)
{
	int		i;
	char	**result;

	i = 1;
	while (argv[i])
	{
		argv[i] = ft_strtrim(argv[i], " ");
		i++;
	}
	if (argc == 2)
	{
		if (ft_isdigit(argv[1][0]) == 0 &&
				argv[1][0] != '-' && argv[1][0] != '+')
			error();
	}
	result = split_argv(argc, argv);
	return (result);
}
