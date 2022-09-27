/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:28:42 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 17:50:34 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* DEFINICIÓN ******************************* */

/* Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La
substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’. */

/* ************************************************************************** */

/* Coje n (len) caracteres de un string (s) desde donde le indiques (start)*/
/*Reserva(con malloc(3)) y devuelve una substring de la string 's'.*/
/*Empiezo con la funcion de seguridad para substr que si no hay s nos da NULL*/
/* si len es mayor que la longitud del string (s), le digo que 
// Casteo malloc y len y los convierto a char, a len +1 para el '\0'*/
/*Aplico la funcion de seguridad del malloc*/
/*Mientras el inicio (start) sea mayor que la longitud del s, 
llevo mi puntero hasta el final y lo retorno*/
/*Mientras len sea mayor que 0, he inicioado el contador de i y esta donde marca
el start (el comienzo)*/
/*hago sumar la i que recorre el striing desde el comienzo que he marcado, hago
que el comienz (start) tambien corra y voy restando lo que me va quedando de 
lo que  quiero que me devuelva (len)*/
/* Llevo mi string hasta el final y lo retorno completado*/

#include "libft.h"

/*VERSION ACORTADA, utilizando strlen y strlcpy*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strsub;

	if (len > ft_strlen(s))
	{
	len = ft_strlen(s);
	}
	strsub = (char *)malloc(len + 1);
	if (start > ft_strlen(s))
	{
		*strsub = '\0';
		return (strsub);
	}
	if (!strsub)
	{
		return (0);
	}
	ft_strlcpy (strsub, & s[start], len + 1);
	return (strsub);
}

/*VERSION ACORTADA, utilizando ft_strlen y ft_strlcpy*/

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s_new;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen (s))
		len = ft_strlen(s);
	i = 0;
	s_new = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_new)
		return (NULL);
	while (start > ft_strlen(s))
	{
		*s_new = '\0';
		return (s_new);
	}
	while (len > 0)
	{
		s_new[i] = s[start];
		i++;
		start++;
		len--;
	}
	s_new[i] = '\0';
	return (s_new);
}*/

/*int main(void)
{
   char    *s;
 
 s = "hola buenas tardes";
   //comienza en el lugar 5(start) y píntame 8 letras del string(len) */
	/*printf ("%s\n", ft_substr(s, 2, 8));*/
/*}*/
