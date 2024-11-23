/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhermann <dhermann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:06:55 by dhermann          #+#    #+#             */
/*   Updated: 2024/11/16 18:22:56 by dhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((i + j) < len
			&& haystack[i + j] == needle[j]
			&& needle[j]
			&& haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
    const char *haystack = "Hello, 42!";
    const char *needle = "42";
    printf("Result: %s\n", ft_strnstr(haystack, needle, 10));
    printf("Result: %s\n", ft_strnstr(haystack, "z", 10));
    printf("Result: %s\n", ft_strnstr(haystack, "", 10));
    return (0);
}
*/