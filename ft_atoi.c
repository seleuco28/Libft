/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarovelazquez <alvarovelazquez@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:31:47 by alvelazq          #+#    #+#             */
/*   Updated: 2022/04/29 16:34:35 by alvarovelaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	resultado;
	long int	signo;

	resultado = 0;
	signo = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signo *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (signo * resultado > 2147483647)
			return (-1);
		else if (signo * resultado < -2147483648)
			return (0);
		resultado = resultado * 10 + *str - '0';
		str++;
	}
	return (signo * resultado);
}

/*
int main(void)
{

    printf("%d\n", atoi("-234"));
    printf("%d\n", ft_atoi("-234"));
    return(0);
}
*/