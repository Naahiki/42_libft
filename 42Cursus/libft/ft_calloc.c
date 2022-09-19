/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:11:24 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/19 12:54:53 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Asigna de manera contigua suficiente espacio para contar objtos que con bytes
// de tamaño de memoria cada uno y devuelve un puntero a la memoria asignada.
// La memoria asignada se llena con bytes de valor 0.//
//Malloc, lo mismo que calloc
//pero la memoria asignada no se llena con bytes de valor 0//
// sizeof, proporciona la cantidad de almacenamiento necesaria, por ejemplo,
// sizeof(char) = 1byte, sizeof(int)= 4 bytes//
// Estructura necesaria de malloc... si el destino esta vacio --> NULL //
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(size * count);
	if (!dest)
	{
		return (NULL);
	}
	ft_memset (dest, 0, size * count);
	return (dest);
}
