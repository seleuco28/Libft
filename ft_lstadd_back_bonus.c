/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:48:17 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:13:04 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstnew.c"
//#include "ft_lstlast.c"
//#include <stdio.h>
//#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nodo;

	if (lst)
	{
		if (*lst)
		{
			nodo = ft_lstlast(*lst);
			nodo->next = new;
		}
		else
			*lst = new;
	}
}
/*
int main(void)
{
    char test1[] = "dias";
	char test2[] = "buenos";
	char test3[] = "como";
	char test4[] = "estas";

    t_list *nodo1 = ft_lstnew(test1);
    t_list *nodo2 = ft_lstnew(test2);
	t_list *nodo3 = ft_lstnew(test3);
	t_list *nodo4 = ft_lstnew(test4);

	nodo1->next = nodo2;
	nodo2->next	= 0;
	
    t_list **estructura;
    estructura = &nodo1;

    ft_lstadd_back(estructura, nodo4);

    t_list *aux = *estructura;
    printf("%s\n", aux->content);
    printf("%s\n", aux->next->content);
	printf("%s\n", aux->next->next->content);

    return (0);
}
*/