/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:18:09 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/09 12:24:30 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if ((char)c == (char)s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int main(void)
{
    char tweet[] = "tripouille";
	char tweet1[] = "tripouille";

	printf("%s\n", ft_strrchr(tweet, 't' + 256));
    printf("%s\n", ft_strrchr(tweet1, 't' + 256));
    return(0);
}
*/