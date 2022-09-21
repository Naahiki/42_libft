/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:11:09 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:47:59 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta funcion envia el caracter c al file descriptor fd especificado*/
/* No devuelve nada*/
/*El file descriptor sobre el que escribir
fd = 1 (Muestra en pantalla)*/
/* Un file descriptor es un numerito provisto por el kernel, usualmente no muy
alto, que representa algo a lo que se puede mandar bytes, 
o desde donde se puede leerlos*/
/* Las dos operaciones básicas sobre file descriptors son:
read(fd, buffer, tam)
Lee bytes de fd y los pone en un buffer de tamaño tam.
write(fd, buffer, tam)
Toma los primeros tam bytes de buffer y los envía al file descriptor fd.*/
/*El Kernel o núcleo, es una parte fundamental del sistema operativo
que se encarga de conceder el acceso al hardware de forma
segura para todo el software que lo solicita, el Kernel es una 
pequeña e invisible parte del sistema operativo, 
pero la más importante, ya que sin esta no podría funcionar.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	c;
	int		fd;

	c = 'N';
	fd = 1;
	ft_putchar_fd(c, fd);
}*/
