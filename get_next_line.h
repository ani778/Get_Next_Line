/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:16:34 by anhovhan          #+#    #+#             */
/*   Updated: 2021/03/20 13:16:37 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

char	*ft_strjoin(char *memory, char *buffer);
int		ft_strlen(const char *s);
int		is_next_line(char *str);
char	*new_line(char *memory);
char	*ft_strnew(char *string);
int		get_next_line(int fd, char **line);

#endif
