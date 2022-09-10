/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:10:58 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/10 12:20:23 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* al cual señala s.Cuando encuentra el caracter, devuelve la primera posicion
donde se encuentra el caracter buscado. Si no encuentra, NULL.
Casteo directamente sin variables*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (0);
}
