/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_signs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 03:30:05 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/12 04:03:40 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Error 1: Invalid character found in input arguments.
//Error 2: Numbers are required in addition to signs.
//Error 3: +/- must be followed by a number.

#include "../push_swap.h"

void	check_arg_signs(char **argv)
{
	int	i;
	int	k;

	i = 0;
	while (argv[++i] != NULL)
	{
		k = -1;
		while (argv[i][++k])
		{
			if (ft_isdigit(argv[i][k]) == 0)
			{
				if (argv[i][k] != '+' && argv[i][k] != '-' && argv[i][k] != ' ')
					error();
				if (ft_strlen(argv[i]) == 1 && (argv[i][k] == '+'
					|| argv[i][k] == '-'))
					error();
				if ((argv[i][k] == '+' || argv[i][k] == '-') &&
						(argv[i][k + 1] == '\0' || argv[i][k + 1] == '+' ||
							argv[i][k + 1] == '-' || argv[i][k + 1] == ' '))
					error();
			}
		}
	}
}
