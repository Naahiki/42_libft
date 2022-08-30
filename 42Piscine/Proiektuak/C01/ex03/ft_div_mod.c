/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:23:01 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/06 18:54:32 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != '0')
	{
		*div= a / b;
		*mod = a % b;
	}
	
}

int main (void)
{
	int a = 9256;
	int b = 2;
	int *div = &a;
	int *mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("el valor es %d", *div);
	printf("el valor %d", *mod);
	return (0);
}
	
