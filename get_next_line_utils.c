/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 19:52:37 by imartin-          #+#    #+#             */
/*   Updated: 2020/02/11 14:23:37 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_g(char *s, char x)
{
	size_t c;

	c = 0;
	while (s[c] != x)
		++c;
	return (c);
}

char	*ft_strchr_g(char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *)(s + i + 1));
		++i;
	}
	if (s[i] == c)
		return ((char *)(s + i + 1));
	else
		return (0);
}

char	*ft_strdup_g(char *s1)
{
	int		c;
	char	*s2;

	c = 0;
	while (s1[c] != 0)
		++c;
	s2 = malloc(sizeof(char) * (c + 1));
	if (s2 == 0)
		return (0);
	c = 0;
	while (s1[c] != 0)
	{
		s2[c] = s1[c];
		++c;
	}
	s2[c] = 0;
	return (s2);
}

char	*ft_strjoin_g(char *s1, char *s2)
{
	char	*array;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (0);
	array = malloc(ft_strlen_g(s1, 0) + ft_strlen_g(s2, 0) + 1);
	if (array == 0)
		return (0);
	while (s1[i])
	{
		array[i] = s1[i];
		++i;
	}
	while (s2[c])
	{
		array[i] = s2[c];
		++i;
		++c;
	}
	array[i] = 0;
	return (array);
}

char	*ft_substr_g(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*array;
	size_t	len_s;

	if (!s)
		return (0);
	array = malloc(len + 1);
	if (array == 0)
		return (0);
	i = 0;
	len_s = ft_strlen_g((char *)s, '\n');
	while (s[start + i] != 0 && i < len && start < len_s)
	{
		array[i] = s[start + i];
		++i;
	}
	array[i] = 0;
	return (array);
}
