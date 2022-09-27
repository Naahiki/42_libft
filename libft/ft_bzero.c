/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:28:44 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:43:56 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Pone a 0 los primeros n bytes del area de bytes  que comienza en s*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int main(void)
{
	char s[] = "hola m";
	ft_bzero(s, 4);
	return (0);
} */