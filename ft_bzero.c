/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:29:55 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/11 12:33:25 by alvelazq         ###   ########.fr       */
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
	//char str[] = "Hola que tal buenos dias pues aqui estamos niño";
	char prueba[] = "Hola que tal buenos dias pues aqui estamos niño";
	
	//printf("%s\n", bzero(str, 1));
	printf("%s\n", ft_bzero(prueba, 0));
	return(0);
}
*/