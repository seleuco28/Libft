/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:07:09 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:14:49 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

    printf("%s\n", (char *)memcpy(dest, src, 5));
	printf("%s\n", (char *)ft_memcpy(dest, src, 5));

    return 0;
}
*/