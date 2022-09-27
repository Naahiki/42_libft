/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:24:31 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 17:52:14 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* DEFINICION ******************************* */

/* La función strdup asigna suficiente memoria para una copia de la cadena
s1, realiza la copia y devuelve un puntero a la misma.  El puntero puede
utilizarse posteriormente como argumento para la función free(3).
Si no hay suficiente memoria disponible, se devuelve NULL y errno se pone a
ENOMEM. */

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

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*cpy;

	cpy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!cpy)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
	free(cpy);
}

/* int main(void)
{
	const char s1[] = "hola";
	printf("%s", ft_strdup(s1));
	return (0);
} */