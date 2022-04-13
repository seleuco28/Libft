/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:52:32 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/11 13:09:19 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

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