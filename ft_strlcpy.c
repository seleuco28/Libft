/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:54:00 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:28:33 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		count++;
	i = 0;
	if (dstsize == 0)
		return (count);
	while ((src[i] != '\0') && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}
/*
int		main(void)
{
	char	dest[4];
	char	src[] = "Hola buenos dias";
	int		size;
    size = 10;
    
    //printf("%lu\n", strlcpy(dest, src, size));
	printf("%lu\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}
*/