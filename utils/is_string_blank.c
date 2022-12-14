/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_string_blank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 02:14:56 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/11 23:25:39 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_string_blank(char *str)
{
	int		i;
	int		num_spaces;

	i = 0;
	num_spaces = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			num_spaces++;
		i++;
	}
	if (ft_strlen(str) == num_spaces)
		return (1);
	return (0);
}
