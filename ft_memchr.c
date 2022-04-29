/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:01:26 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:12:50 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == (unsigned char)str[i])
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char data[] = "como vas conejo";

    printf("%s\n", memchr(data, 'o', 3));
    printf("%s\n", ft_memchr(data, 'o', 3));

    return(0);
}
*/