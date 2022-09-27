/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:18:07 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:48:11 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta funcion envia la string s al fd especificado*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

/*int	main(void)
{
	char	*c;
	int		fd;
	
	c = "NahikiWinki";
	fd = 1;
	ft_putstr_fd(c, fd);
}*/