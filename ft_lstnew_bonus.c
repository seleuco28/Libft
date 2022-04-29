/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:17:10 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:10:18 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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