/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:55:11 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/26 10:55:23 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void (*del)(void *))
{
	t_list	*nwlst;
	t_list	*tempnode;

	nwlst = NULL;
	while (lst)
	{
		tempnode = ft_lstnew(f(lst->content));
		if (!tempnode)
		{
			ft_lstclear(&tempnode, del);
			return (NULL);
		}
		ft_lstadd_back(&nwlst, tempnode);
		lst = lst->next;
	}
	return (nwlst);
}
