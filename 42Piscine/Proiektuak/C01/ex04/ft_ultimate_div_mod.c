/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:42:13 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/11 17:31:22 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int z;
	
	z = *a / *b;
	*b = *a % *b;
	*a =z;

}

int main (void)
{
	int *a;
	int *b;
	int c;
	int d;
	
	a = &c;
	b = &d;

	c = 25;
	d = 4;
	 ft_ultimate_div_mod(a, b);
	
	printf("division= %d y resto = %d", *a, *b);
	//printf("valor =%d, direccion =%p, puntero a la direccion = %p", *x, x, &x);
	return (0);
}




  