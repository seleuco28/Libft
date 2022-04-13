/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:29:51 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:23:34 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (i < (n - 1)))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void)
{
    char str1[] = "test\200";
    char str2[] = "test\0";

    printf("%d\n", strncmp(str1, str2, 6));
    printf("%d\n", ft_strncmp(str1, str2, 6));


    return(0);    
}
*/