/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:04:31 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:13:45 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstdelone.c"
//#include <stdio.h>
//#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo;

	while (*lst)
	{
		nodo = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nodo;
	}
	*lst = NULL;
}
