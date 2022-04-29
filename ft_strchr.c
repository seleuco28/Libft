/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:00:54 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 17:20:31 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == (char)s[i])
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
int main(void)
{
    char tweet[] = "tripouille";
	char tweet1[] = "tripouille";
	
	printf("%s\n", strchr(tweet1, 't' + 256));
    printf("%s\n", ft_strchr(tweet, 't' + 256));

    return(0);
}
*/