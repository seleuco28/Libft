/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:00:54 by alvelazq          #+#    #+#             */
/*   Updated: 2022/05/17 13:20:47 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
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
    char tweet[] = "tripouillete hola buenas tardes";
	char tweet1[] = "tripouillete hola buenas tardes";
	
	printf("%s\n", strchr(tweet1, 'a'));
    printf("%s\n", ft_strchr(tweet, 'a'));

    return(0);
}
*/