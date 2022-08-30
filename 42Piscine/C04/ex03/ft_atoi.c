/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:05:51 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/19 14:00:34 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h> 

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == ('\r')
		|| *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}

/*#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi("---55"));
	printf("%d\n", ft_atoi(" -+-+-586557"));
	printf("%d\n", ft_atoi(" -1234ab567"));

	printf("%d\n", atoi(" 1234ab567"));
	printf("%d\n", atoi("5"));
	printf("%d\n", atoi("86557"));
	printf("%d\n", atoi(" -1234ab567"));
}*/
