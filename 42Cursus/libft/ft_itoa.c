/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:41:02 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:45:02 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Utilizando malloc(3),genera una string que represente el valor entero recibido
 * como argumento.Los numeros negativos tienen que gestionarse.*/
/*Esta funcion convirte un entero dado en uun caracter.*/
/*LOGICA: 1) Creamos una funcion separada para recuperar la longitud de entrada,
 * usando un simple bucle, devolviendo un vaor no nulo si la longt es 0 e incre
 * mentando un contador mientras iteramos primero a traves de los 1, luego 
 * dividir por 10 e iterar a traves de los de hamarreko, entonces dividir por 10
 * e iterar a traves de los ehuneko etc.. hasta el final el numero pasado*/
/*2)Usamos malloc para crear un espacio de memria ara nuestro caracter y 
añadims +1 para tener en cuenta el final el byte que tenemos que añair.*/
/*3) Añadimos un salvaguarda si nuestro malloc falla para que si falla devuelve 
 * NULL. funcion de seguridad*/
/*4)Añadimos un byte e fin e cadena al final de nuestro caracter dde retorno.*/
/*5)Reseteamoos la lngitud a la que añadimos uno para poder usarla en bucle*/
/*6)Empezamos desde el primer indice de nuestra cadena de caracteres.*/
/*7)Anotamos un signo si el numero dado es menor que 0*/
/*8)Pasamos por un bucle y convertimos primero los unos en char, invirtiendo el
 * algoritmo aoi y repitiendo luego los hamarreko,ehuneko...*/
/*9)Devolvemos nuestra cadena de caracteres completamente convertida.*/
/* static --> Las variables estáticas tienen la propiedad de conservar 
 * su valor incluso después de salir de su ámbito. Por lo tanto, 
 * las variables estáticas conservan su valor anterior en su ámbito anterior
 * y no se inicializan de nuevo en el nuevo ámbito.Las variables estáticas
 * se asignan en el segmento de datos, no en el segmento de pila.as variables 
 * estáticas (como las globales) se inicializan como 0 
 * si no se inicializan explícitamente. */

#include "libft.h"

static int	length(int nb)
{
	int	s;

	if (nb == 0)
		return (1);
	s = 0;
	if (nb < 0)
		s = 1;
	while (nb)
	{
		s++;
		nb = nb / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;

	len = length(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	str[len] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (num)
	{
		str[len] = ('0' + (num % 10));
		num = num / 10;
		len--;
	}
	return (str);
}

/*int  main(void)
{
   int     num;
   int     i;
   char    *output;
 
   num =+78808098;
   i = 0;
   output = ft_itoa(num);
   while (output[i])
   {
       write(1, &output[i], 1);
       i++;
   }
   free(output);
   return (0);
} */

/* int main(void)
{
	int n;
	char *string;
	n = 0144;
	string = ft_itoa(n);
	printf("mi función = %s", string);
	free(string);
	return (0);
} */
