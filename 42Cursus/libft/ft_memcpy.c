/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:44:17 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:54:49 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copia n bytes desde el area de memoria src a area dest.
 Dichas areas de memoria no deben tener ningun punto de interseccion, 
 en tal caso utilizar la funcion memmove en lugar de memcpy*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	void *dest;
	const void *src = "Hola";
	printf("%s", ft_memcpy(dest, src, 2));
	return (0);
}*/
/* int main(void)
{
	char dst[] = "";
	char src[] = "";
	printf("%s", ft_memcpy(dst, src, 4));
	return (0);
} */