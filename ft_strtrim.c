/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvelazq <alvelazq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 08:42:11 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/11 13:07:14 by alvelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"
#include <stdio.h>
#include <stdlib.h>

static	int	ft_char_dentro(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_char_dentro(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_dentro(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
	char s1[] = "           ";
	char set[] = " ";

	printf("%s\n", ft_strtrim(s1, set));
	return(0);
}
*/