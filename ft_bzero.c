/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <dhermann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:05:30 by dhermann          #+#    #+#             */
/*   Updated: 2024/11/16 18:22:56 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = '\0';
	}
}

/*
#include <stdio.h>
#include <strings.h>
int main(void)
{
    char buffer[10] = "Hello";
    bzero(buffer, 5);
    for (int i = 0; i < 10; i++)
    {
        if (buffer[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", buffer[i]);
    }
	printf("\n");
    return (0);
}
*/