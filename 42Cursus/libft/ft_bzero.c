/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:28:44 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/06 18:01:24 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Pone a 0 los primeros n bytes del area de bytes  que comienza en s*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
