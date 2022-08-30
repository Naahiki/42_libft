/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:40:55 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/13 13:26:02 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
			if (str[i] < 97 || str[i] > 122)
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
	char c[]= "UUUU";
	n = ft_str_is_lowercase(c);
	printf("%d\n", n);
}*/
