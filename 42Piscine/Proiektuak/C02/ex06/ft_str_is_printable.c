/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:10:38 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/13 13:28:37 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 32 || str[i] > 127)
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
/*int	main(void)
{
	int	n;
	char c[]= "jhlkj";
//	c[2]= 13;
	n = ft_str_is_printable(c);
	printf("%d\n", n);
}*/