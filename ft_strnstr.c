/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:01:09 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/11 12:38:26 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && (i < len))
	{
		j = 0;
		while (((i + j) < len) && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char haystack[50] = "hola buenas";
    char haystack1[50] = "hola buenas";

    printf("%s\n", strnstr(haystack, "la", 4));
    printf("%s\n", ft_strnstr(haystack1, "la", 4));
    
    return(0);
}
*/