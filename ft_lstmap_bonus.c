/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:37:18 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 10:50:24 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstnew.c"
//#include "ft_lstclear.c"
//#include "ft_lstadd_back.c"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_modificada;
	t_list	*aux;

	aux = 0;
	while (lst)
	{
		lst_modificada = ft_lstnew((*f)(lst->content));
		if (!lst_modificada)
		{
			ft_lstclear(&aux, del);
			return (NULL);
		}
		ft_lstadd_back(&aux, lst_modificada);
		lst = lst->next;
	}
	return (aux);
}
