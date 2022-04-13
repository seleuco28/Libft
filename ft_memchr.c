/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:01:26 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:15:22 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

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