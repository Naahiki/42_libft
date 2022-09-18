/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:11:09 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/18 14:16:56 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta funcion envia el caracter c al file descriptor fd especificado*/
/* No devuelve nada*/
/*El file descriptor sobre el que escribir
fd = 1 (Muestra en pantalla)*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	char	c;
	int		fd;

	c = 'N';
	fd = 1;
	ft_putchar_fd(c, fd);
}
