/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:14:24 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 16:38:55 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_bzero.c"

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
    valores = 4;
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
