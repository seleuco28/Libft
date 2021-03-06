/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:52:37 by alvelazq          #+#    #+#             */
/*   Updated: 2022/05/10 11:57:44 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int nbr)
{
	int	leng;

	if (nbr <= 0)
		leng = 1;
	else
		leng = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		leng++;
	}
	return (leng);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				len;
	char			*str;

	len = ft_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	if (str == 0)
		return (0);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int main(void)
{
    printf("%s\n", ft_itoa(-65));

    return (0);
}
