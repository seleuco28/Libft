/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:14:24 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 11:57:30 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_bzero.c"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*hola;

	if (size >= SIZE_MAX)
		return (NULL);
	hola = malloc(count * size);
	if (hola == NULL)
		return (NULL);
	ft_bzero (hola, size * count);
	return (hola);
}
/*
int main(void)
{

    int *arrayCalloc;
    int tamañoArray;
    int valores;
    int dato;
    int contador;

    tamañoArray = 10;
    valores = 5;
    dato = 2;

    arrayCalloc = (int*)ft_calloc(tamañoArray, sizeof(int));

    for (contador=0; contador<valores; contador++){
    arrayCalloc[contador] = dato;
    }

    for(contador=0; contador<(tamañoArray); contador++){
        printf("%d, ", arrayCalloc[contador]);
    }

    return(0);
}
*/
