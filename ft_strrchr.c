/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <dhermann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:06:58 by dhermann          #+#    #+#             */
/*   Updated: 2024/11/16 18:22:56 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence = NULL;

	while (*s)
	{
		if (*s == (unsigned char)c)
			last_occurrence = s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

/*
#include <stdio.h>
int main(void)
{
    const char *str = "Hello, 42!";
    printf("Result: %s\n", ft_strrchr(str, 'l'));
    printf("Result: %s\n", ft_strrchr(str, 'z')); //NULL
    printf("Result: %s\n", ft_strrchr(str, '\0'));
    return (0);
}
*/