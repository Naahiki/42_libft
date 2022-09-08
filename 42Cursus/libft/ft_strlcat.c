/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:54:20 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/08 17:45:49 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta funcion añade una cadena al final de la otra*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest;
	size_t	orig;
	size_t	i;

	i = 0;
	dest = ft_strlen(dst);
	orig = ft_strlen(src);
	if (size <= dest)
		return (size + orig);
	while (i < (size - dest - 1) && src[i])
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + orig);
}

/* #include <stdio.h>
int main (void)
{			
	const char source[] = "AndrEider";			
	char destiny[] = "robot";			
	size_t destinysize;			
	destinysize = 15;			
	printf("Número de carácteres del string 1: %lu\n", 
	ft_strlcat(destiny, source, destinysize));			
	printf("Destiny = string 2: %s\n", destiny);			
	return (0);			

}*/
