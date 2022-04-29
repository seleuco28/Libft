/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:14:23 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:26:27 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	suma;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	suma = lonsrc + londst;
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	lonsrc = 0;
	while (src[lonsrc] != '\0' && londst < (dstsize - 1))
	{
		dst[londst] = src[lonsrc];
		londst++;
		lonsrc++;
	}
	dst[londst] = '\0';
	return (suma);
}
/*
int		main(void)
{
	char	dest[25] = "abcd";
    char	dest1[25] = "abcd";
	printf("%lu\n", strlcat(dest, "efg", 1));    
	printf("%s\n", dest);    
	printf("%lu\n", ft_strlcat(dest1, "efg", 1));
	printf("%s\n", dest1);
}
*/