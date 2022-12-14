/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:52:26 by aderugo           #+#    #+#             */
/*   Updated: 2022/10/16 07:30:33 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_gnl(char *str, int *i, int *give_loc)
{
	while (*i < (ft_strlen(str)))
	{
		if (str[*i] == '\n')
		{
			*give_loc = *i;
			return (*i);
		}
		(*i)++;
	}
	*give_loc = -1;
	return (-1);
}

char	*fill_buf(char *buf, int loc)
{
	char	*result;

	result = NULL;
	if (loc == -1)
		result = NULL;
	else
		result = ft_strjoin(NULL, &buf[loc + 1]);
	free(buf);
	buf = NULL;
	return (result);
}

char	*create_result(char *buf, int loc)
{
	char	c;
	char	*result;

	if (!buf)
		return (NULL);
	if (loc == -1)
	{
		result = ft_strjoin(NULL, buf);
		return (result);
	}
	c = buf[loc + 1];
	buf[loc + 1] = '\0';
	result = ft_strjoin(NULL, buf);
	buf[loc + 1] = c;
	return (result);
}

char	*ft_read(int fd, char *buf, int *loc)
{
	char	s[2];
	int		read_c;
	int		i;

	i = 0;
	read_c = 0;
	while (ft_strchr_gnl(buf, &i, loc) == -1)
	{
		read_c = read(fd, s, 1);
		if (read_c <= 0)
			break ;
		s[read_c] = '\0';
		buf = ft_strjoin(buf, s);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*result;
	int			loc;

	loc = 0;
	result = NULL;
	if (fd < 0 || fd > 1024)
		return (NULL);
	buf = ft_read(fd, buf, &loc);
	if (buf == NULL)
		return (NULL);
	result = create_result(buf, loc);
	buf = fill_buf(buf, loc);
	if (result[0] == '\0')
		result = NULL;
	return (result);
}
