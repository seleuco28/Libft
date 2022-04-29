/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:01:29 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:00:00 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstnew_bonus.c"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    char test1[] = "buenos";
	char test2[] = "dias";
	char test3[] = "como";

    t_list *nodo1 = ft_lstnew(test1);
    t_list *nodo2 = ft_lstnew(test2);
	t_list *nodo3 = ft_lstnew(test3);

	nodo1->next = nodo2;
	nodo2->next	= 0; //PRESCINDIBLE PERO SIRVE PARA ACLARARME

    t_list **estructura;
    estructura = &nodo1;

    ft_lstadd_front(estructura, nodo3);

    t_list *aux = *estructura;
    printf("%s\n", aux->content);
    printf("%s\n", aux->next->content);
	printf("%s\n", aux->next->next->content);

    return (0);
}
*/
