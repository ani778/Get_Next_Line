/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:15:57 by anhovhan          #+#    #+#             */
/*   Updated: 2021/03/20 13:15:59 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int			flag;
	char		*buff;
	static char	*remind;

	if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
		return (-1);
	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	flag = 1;
	while ((flag = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[flag] = '\0';
		remind = ft_strjoin(remind, buff);
		if (is_next_line(remind))
			break ;
	}
	free(buff);
	if (flag < 0)
		return (-1);
	*line = new_line(remind);
	remind = ft_strnew(remind);
	if (flag == 0 && !remind)
		return (0);
	return (1);
}
