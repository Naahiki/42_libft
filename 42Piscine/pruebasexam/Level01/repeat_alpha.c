/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:46:04 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/21 15:46:12 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		char_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int repeat;

	if (ac == 2)
	{
		while (*av[1] != '\0')
		{
			repeat = char_count(*av[1]);
			while (repeat > 0)
			{
				write(1, av[1], 1);
				repeat--;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
