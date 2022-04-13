/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:54:54 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:16:26 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
	char dest[] = "holahola";
    char src[] = "adios";
	char dest1[] = "holahola";
	char src1[] = "adios";

    printf("%s\n", memmove(dest, src, 3));
	printf("%s\n", ft_memmove(dest, src, 3));

    return 0;
}
*/