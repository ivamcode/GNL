/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:24:46 by imartin-          #+#    #+#             */
/*   Updated: 2020/02/14 12:30:00 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int		fd;
	int		fd2;
	int		fd3;
	char	*ruta = "alphabet";
	char	*line = NULL;
	char	*rutica= "ye.txt";
	char	*rutilla= "rutilla";

	fd = open(ruta, O_RDONLY);
	fd2 = open(rutica, O_RDONLY);
	fd3 = open(rutilla, O_RDONLY);

	get_next_line(fd, &line);
	printf("-file- \033[1;34m[%d]->%s\033[0m\n", fd, line);
	free(line);
	line = 0;

	get_next_line(fd, &line);
	printf("-file- \033[1;34m[%d]->%s\033[0m\n", fd, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd3, &line);
	printf("-file- \033[1;36m[%d]->%s\033[0m\n", fd3, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd, &line);
	printf("-file- \033[1;34m[%d]->%s\033[0m\n", fd, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd3, &line);
	printf("-file- \033[1;36m[%d]->%s\033[0m\n", fd3, line);
	free(line);
	line = 0;

	get_next_line(fd, &line);
	printf("-file- \033[1;34m[%d]->%s\033[0m\n", fd, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	get_next_line(fd2, &line);
	printf("-file- \033[1;35m[%d]->%s\033[0m\n", fd2, line);
	free(line);
	line = 0;

	system("leaks e_gnl");

	close(fd);
	close(fd2);
	close(fd3);
	return (0);

	/*if ((fd = open(ruta, O_RDONLY)) > 0)
	{
		while (get_next_line(fd, &line) == 1)
		{
			printf("%s\n", line);
			free(line);
			line = 0;
		}
	}
	printf("%s\n", line);
	free(line);
	line = 0;
	close(fd);
	ruta = 0;
	//tpm = malloc(20);
	system("leaks e_gnl");
	return (0);*/
}
