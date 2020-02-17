/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:48:54 by imartin-          #+#    #+#             */
/*   Updated: 2020/02/14 17:19:02 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	checker_gnl(int fd, char **line, char **temp)
{
	char *temp_cop;
	char *aux_temp_ma;

	if (!(temp_cop = ft_strdup_g(temp[fd])))
		return (-1);
	aux_temp_ma = ft_strchr_g(temp_cop, '\n');
	if (!(*line = ft_substr_g(temp_cop, 0, ft_strlen_g(temp[fd], '\n'))))
	{
		free(temp_cop);
		free(temp[fd]);
		return (-1);
	}
	free(temp[fd]);
	if ((temp[fd] = ft_strdup_g(aux_temp_ma)))
	{
		free(temp_cop);
		return (1);
	}
	else
	{
		free(temp[fd]);
		free(temp_cop);
		return (-1);
	}
}

static int	checker_eof(int fd, char **line, char **temp, ssize_t nbytes)
{
	if (nbytes == 0 && temp[fd][0] != 0)
	{
		if (!(*line = ft_strdup_g(temp[fd])))
		{
			free(temp[fd]);
			temp[fd] = 0;
			return (-1);
		}
	}
	else
	{
		if (!(*line = ft_strdup_g("")))
		{
			free(temp[fd]);
			temp[fd] = 0;
			return (-1);
		}
	}
	free(temp[fd]);
	temp[fd] = 0;
	return (0);
}

int			get_next_line(int fd, char **line)
{
	static char	*temp[4096];
	ssize_t		nbytes;
	char		buffer[BUFFER_SIZE + 1];
	char		*aux_temp;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	if (!temp[fd])
		if (!(temp[fd] = ft_strdup_g("")))
			return (-1);
	if (ft_strchr_g(temp[fd], '\n'))
		return (checker_gnl(fd, line, temp));
	while ((nbytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[nbytes] = 0;
		if (!(aux_temp = ft_strjoin_g(temp[fd], buffer)))
			return (-1);
		free(temp[fd]);
		temp[fd] = aux_temp;
		if (ft_strchr_g(temp[fd], '\n'))
			return (checker_gnl(fd, line, temp));
	}
	return (nbytes == -1 ? -1 : checker_eof(fd, line, temp, nbytes));
}
