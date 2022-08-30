/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:08:52 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/21 16:38:04 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int	i = 0;
	char	ltr = argv[1][i];

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				ltr += 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				ltr += 1;
			if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				ltr -= 25;
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
