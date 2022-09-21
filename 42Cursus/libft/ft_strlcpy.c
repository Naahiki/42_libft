/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:41:48 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:49:21 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Las funciones strlcpy y strlcat copian y concatenan cadenas con mismos 
parametros de entrada y salida. 
strlcpy copia hasta dstsize -1 caracteres de la cadena src a dst, 
terminando con NULL el resultado si dstsize no es 0*/
/* size -1 pongo -1 para guardar un byte 
		al final del dest por que tiene que aabar en NULL '\0' 
		que despes lo hago*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen((char *)src);
	if (size != 0)
	{
		while (src[i] && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

/* int main (void)
{
	const char src[] = "hola";
	char dst[8];
	printf ("dst = %zu y count = %s", ft_strlcpy(dst, src, 3), dst);
	return (0);
} */