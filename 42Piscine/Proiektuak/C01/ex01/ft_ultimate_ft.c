/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:19:31 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/06 19:18:28 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);
{
	*********nbr = 42;
}

int	main(void)
{
	int	nbr;

	ft_ultimate_ft(&nbr);
	write (1, &nbr, 2);
	return (0);
}
