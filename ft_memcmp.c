/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:41:39 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:16:14 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (i < (n - 1)))
		i++;
	return (str1[i] - str2[i]);
}
/*
int main(void)
{
    //char str1[] = "001270";
    //char str2[] = "00420";

	char s1[] = {0, 0, 127, 0};
	char s2[] = {0, 0, 42, 0};

    printf("%d\n", memcmp(s1, s2, 4));
    printf("%d\n", ft_memcmp(s1, s2, 4));

    return(0);    
}
*/