/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <dhermann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:06:30 by dhermann          #+#    #+#             */
/*   Updated: 2024/11/16 18:22:56 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
    const char *s = "Hello, 42!";
    printf("Result: %s\n", ft_strchr(s, '4'));
    printf("Result: %s\n", ft_strchr(s, 'z'));   //NULL
    printf("Result: %s\n", ft_strchr(s, '\0'));  //final
    printf("Result: %s\n", ft_strchr(NULL, '4'));
    return (0);
}
*/