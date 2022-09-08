/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:09:50 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/08 17:46:19 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rellena los primeros n bytes del area de memoria apuntada por s con el byte 
constante c*/
#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	i = 0;
	aux = (unsigned char *)s;
	while (i < n)
	{	
		aux[i] = (unsigned char) c;
			i++;
	}
	return ((void *) aux);
}
