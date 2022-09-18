/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:25:17 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/18 13:44:26 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A cada caracter  de la string 's',aplica la función 'f' dando como parametros 
el indice de cada caracter dentro de 's' y la direccion del propio caracter, 
que podrá modificarse si es necesario.*/
/* Valor devuelto --> NADA.*/
// (*f)(i, (s+1));//

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	funcion(unsigned int i, char *str)
{
	str++;
}

int	main(void)
{
	char	*str;

	str = "Hola nahiki";
	ft_striteri(str, funcion);
	printf("el resultado es: %s\n", str);
	return (0);
}
*/