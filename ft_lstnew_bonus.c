/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:17:10 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:14:46 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*hola;

	hola = (t_list *)malloc(sizeof(*hola));
	if (!hola)
		return (0);
	hola->content = content;
	hola->next = NULL;
	return (hola);
}
/*
int main(void)
{
	char str[] = "buenos dias";

	t_list *kaixo;

	kaixo = ft_lstnew(str);
	printf("%s\n", (char *)kaixo->content);

	return(0);
}
*/