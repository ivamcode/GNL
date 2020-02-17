/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 13:05:26 by imartin-          #+#    #+#             */
/*   Updated: 2020/02/03 12:42:14 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen_g(char *s, char x);
char	*ft_strchr_g(char *s, int c);
char	*ft_strdup_g(char *s1);
char	*ft_strjoin_g(char *s1, char *s2);
char	*ft_substr_g(char *s, unsigned int start, size_t len);
int		get_next_line(int fd, char **line);

#endif
