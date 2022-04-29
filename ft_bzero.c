/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:29:55 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 16:35:14 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*chapuza;

	i = 0;
	chapuza = s;
	while (i < n)
	{
		chapuza[i] = '\0';
		i++;
	}
	return (s);
}
/*
int main (void) {
	char str[] = "Hola que tal buenos dias pues aqui estamos niño";
	char str1[] = "Hola que tal buenos dias pues aqui estamos niño";
	
	printf("%s\n", (char *)bzero(str, 10));
	printf("%s\n", (char *)ft_bzero(str1, 10));
	return(0);
}
*/