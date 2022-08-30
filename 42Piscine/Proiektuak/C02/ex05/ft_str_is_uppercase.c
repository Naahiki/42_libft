/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:55:52 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/13 13:27:09 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 65 || str[i] > 90)
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}


#include <stdio.h>
int	main(void)
{
	int	n;
	char c[]= "LLL";
	n = ft_str_is_uppercase(c);
	printf("%d\n", n);
}

