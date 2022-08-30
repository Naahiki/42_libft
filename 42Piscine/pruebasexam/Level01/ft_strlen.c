/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:40:14 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/21 15:40:26 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

// DO NOT SUBMIT ANYTHING BELOW

#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Amanda";

	int count = ft_strlen(str);

	printf("%d\n", count);
}
