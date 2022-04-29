/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:18:09 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:34:27 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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