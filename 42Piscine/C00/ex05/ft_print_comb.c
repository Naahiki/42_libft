/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:13:08 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/04 17:29:49 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numbers(int a, int b, int c)
{
	ft_putchar(48 + a);
	ft_putchar(48 + b);
	ft_putchar(48 + c);
	if (a != 7)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				ft_numbers(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = a + 2;
	}
}
