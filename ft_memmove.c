/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <dhermann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:06:11 by dhermann          #+#    #+#             */
/*   Updated: 2024/11/16 18:22:56 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}

/*
#include <stdio.h>
int main(void)
{
    char src[] = "Hello, world!";
    char dst[20];

    // Copiar sem sobreposição
    ft_memmove(dst, src, 13);
    printf("Destination after memmove (no overlap): %s\n", dst);
    // Copiar com sobreposição
    ft_memmove(src + 6, src, 6);
    printf("Source after memmove (with overlap): %s\n", src);
    return (0);
}
*/