/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:52:32 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:16:31 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (b);
}
/*
int main (void) {
   char str[] = "Holaquetal";
	char str1[] = "Holaquetal";

	printf("%s\n", str);
	ft_memset(str,'$', 3);
	printf("%s\n", str);

	printf("%s\n", str1);
	memset(str1,'$', 3);
	printf("%s\n", str1);
   return(0);
}
*/