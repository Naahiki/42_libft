/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:06:16 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/21 17:47:06 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}
