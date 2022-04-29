/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:37:18 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:09:24 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstnew_bonus.c"
//#include "ft_lstclear_bonus.c"
//#include "ft_lstadd_back_bonus.c"

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
