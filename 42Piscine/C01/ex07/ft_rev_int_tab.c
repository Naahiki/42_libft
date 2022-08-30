/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:42:10 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/15 11:07:22 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int	c;
	int aux[size];

	c = 0;
	i = size - 1;
	while (i >= 0)
	{
		aux[c] = tab[i];
		i--;
		c++;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = aux [c];
		c++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int aux;
	i = 0;
	
	while (i < size / 2)
	{
		aux = tab[i];
		tab [i] = tab [size -1 -i];
		tab [size -1 -i] = aux;
		i++;
	}
}
