/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:30:00 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/10 12:47:35 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta funcion copia n caracteres de la cadena src a la cadena dest,pero para 
bloques de memoria superpuestos(overlap), memmove es un enfoque mas seguro que 
memcpy. No es un caso comun, pero puede caber la posibilidad de que la direcc
de memoria de ambas cadenas se sobrepongan. Voy a hacer casteando directamente 
y con variables*/
#include "libft.h"

/*void	ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *orig;
	size_t	i;
	
	i = 0;
	dest = dst;
	orig = src;
	if (dest > orig)
	{
		while (len--)
		des[len] = orig[len];
	}
	else if (dest < orig)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		while (len--)
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}
