/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:03:49 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:48:02 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta funcion envia la string s al file descriptor fd dado, seguido de un 
 * salto de linea*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd (*s, fd);
		s++;
	}
	ft_putchar_fd ('\n', fd);
}

/*int main(void)
{
   char    *c;
   int     fd;
   c = "Nahiki";
   fd = 1;
   ft_putendl_fd(c, fd);
}*/