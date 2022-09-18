/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:03:09 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/18 13:42:46 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A cada caracter del string s, aplica la función f. Da como parametros cada 
caracter dentro de la string.Genera una nueva string con el 
resultado de la funcion*/
/* Valor devuelto: La string creada tras el correcto uso de 'f' sobre cada
 * caracter, NULL si falla la reserva de memoria (malloc)*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	funcion(unsigned int i, char str)
{
	i = 32;
	return (str - i);
}

int	main(void)
{
	char	*str;
	char	*result;

	str = "hola nahikari";
	result = ft_strmapi(str, funcion);
	printf("Resultado final: %s\n", result);
	return (0);
}*/