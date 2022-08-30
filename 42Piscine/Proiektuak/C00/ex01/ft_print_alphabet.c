/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:56:21 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/02 11:10:23 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z' )
	{
		write (1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
