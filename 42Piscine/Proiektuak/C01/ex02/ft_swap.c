/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:00:57 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/06 19:26:46 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *x, int *y)
{	
	z = *x;
	*x = *y;
	*y = z;
	ft_putchar(*x);
	ft_putchar(*y);
}

int	main(void)
{
	int	a;
	int	b;
	int	*x;
	int	*y;
	a = 7;
	b = 8;
	x = &a;
	y = &b;
	ft_swap (x, y);
	return (0);
}
