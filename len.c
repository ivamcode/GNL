/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imartin- <imartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:35:00 by imartin-          #+#    #+#             */
/*   Updated: 2019/12/18 15:52:43 by imartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen_gnl(char *s)
{
	size_t c;

	c = 0;
	while (s[c] != 0 && s[c] != '\n')
		++c;
	return (c);
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char *array;

    array = malloc(13);
    if (!array)
        return (0);
    array = strcpy(array, "Hello\nWorld\n");
    printf("Valor de len--> %zu\nOur string--> %sTamaño real array--> %lu\n",
        ft_strlen_gnl(array), array, strlen(array));
    free(array);
    return 0;
}
