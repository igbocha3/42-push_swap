/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:07:07 by igbocha3          #+#    #+#             */
/*   Updated: 2022/12/14 00:11:34 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char *str, char **final_argv, int *arr, int index)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str++ - '0';
		if (result > INT_MAX && sign == 1)
			free_error(arr, final_argv, index);
		if (((result - 1) > INT_MAX) && sign == -1)
			free_error(arr, final_argv, index);
	}
	if (ft_isdigit(*str) == 0 && *str)
		free_error(arr, final_argv, index);
	result *= sign;
	return (result);
}
