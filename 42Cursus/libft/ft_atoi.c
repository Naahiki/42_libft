/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:29:48 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/13 18:31:42 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == ('\r')
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/*#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_atoi("                              -76"));
	printf("%d\n", ft_atoi("---55"));
	printf("%d\n", ft_atoi(" -+-+-586557"));
	printf("%d\n", ft_atoi(" -1234ab567"));
}*/
