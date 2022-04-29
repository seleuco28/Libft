/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:48:17 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 16:57:38 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstnew_bonus.c"
//#include "ft_lstlast_bonus.c"

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