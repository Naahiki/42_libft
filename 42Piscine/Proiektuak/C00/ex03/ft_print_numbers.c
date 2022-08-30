/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:13:57 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/04 17:23:48 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void)
{
	int	i;

	i = '0';
	while (i <= '9' )
	{
		write (1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_number();
	return (0);
}
