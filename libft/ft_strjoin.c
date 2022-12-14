/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:21:53 by igbocha3          #+#    #+#             */
/*   Updated: 2022/10/16 04:24:13 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		li[3];
	char	*str;

	if (s2 == NULL || s2[0] == '\0')
		return (NULL);
	li[0] = ft_strlen(s1);
	li[1] = ft_strlen(s2);
	li[2] = 0;
	str = (char *)malloc(sizeof(char) * (li[0] + li[1] + 1));
	if (!str)
		return (NULL);
	while (li[2] < li[0] + li[1] + 1)
	{
		if (li[2] < li[0])
			str[li[2]] = s1[li[2]];
		if (li[2] >= li[0])
			str[li[2]] = s2[li[2] - li[0]];
		li[2]++;
	}
	str[li[0] + li[1]] = '\0';
	if (s1 != NULL)
		free(s1);
	s1 = NULL;
	return (str);
}
