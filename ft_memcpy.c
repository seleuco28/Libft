/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:07:09 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:16:00 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int main(void)
{
	char dest[] = "wenii";
    char src[] = "hola";
	char dest1[] = "wenii";
	char src1[] = "hola";

    printf("%s\n", memcpy(dest, src, 5));
	printf("%s\n", ft_memcpy(dest, src, 5));

    return 0;
}
*/