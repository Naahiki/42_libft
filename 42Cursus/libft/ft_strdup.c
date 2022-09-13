/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:24:31 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/13 18:13:04 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Asigna memoria suficiente para una copia de la cadena s1, hace la copia y le
//devuelve un puntero.El puntero se puede utilizar posteriormente como argument 
// de la funcion free(3)//
//Si no hay suficiente memoria disponible, se devuelve NULL y se establece
//ENOMEM(?)//
//Declaro 3 variables, contador, nuevo puntero, valor de la cadena//
//Meto el valor de la cadena con un programa contador(ft_strlen)//
//Guardo el espacio necesario con malloc, +1 para guardar el NULL//
//Estructura necesaria del malloc, if (!s1_new)-->NULL//
//Inicio el contador al principio y creo el while, mientras el contador no est
//en el final, igualo las cadenas, sumo el contador ++//
//Los igualo para leer el total de los caracteres incluidos en el null//
//Por ultimo, retorno mi cadena//

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

char	*ft_strdup(const char *s1)
{
	char	*new;

	new = malloc(ft_strlen(s1) + 1);
	if (new == NULL)
		return (NULL);
	return ((char *) ft_memcpy(new, s1, ft_strlen(s1) + 1));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

/*char	*ft_strdup(const char *s1)
{
	int		cont;
	char	s1_new;
	int		size;

	size = ft_strlen(s1);
	s1_new = malloc (sizeof(char) * size +1);
	if (!s1_new)
		return (NULL);
	cont = 0;
	while (s1[cont] != '\0')
	{
		s1_new[cont] = s1 [cont];
		cont++;
	}
	s1_new[cont] = s1[cont];
	return (s1_new);
}*/

/*int	main(void)
{
	printf("%s\n", ft_strdup("Hola Nahikii"));
	printf("%s\n", strdup("Hola Nahikii"));
	return (0);
}*/
