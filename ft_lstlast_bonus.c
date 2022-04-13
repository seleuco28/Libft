/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:57:42 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:14:28 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nodo;

	nodo = lst;
	while (nodo)
	{
		if (nodo->next == 0)
			return (nodo);
		nodo = nodo->next;
	}
	return (0);
}

/*
int		main(void)
{
	char	str[] = "test";

	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*ret;

	elem1 = malloc(sizeof(t_list));
	elem2 = malloc(sizeof(t_list));
	elem3 = malloc(sizeof(t_list));

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	elem3->content = (void *)str;
	ret = ft_lstlast(elem1);
	printf("%s\n", (char *)ret->content);
}
*/