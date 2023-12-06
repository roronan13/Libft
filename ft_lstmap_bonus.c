/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:02:39 by rpothier          #+#    #+#             */
/*   Updated: 2023/12/06 20:19:49 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**node;
	t_list	*node1;
	t_list	new;
	
	node1 = lst;
	*node = lst;
	while (node1)
	{
		new = ft_lstnew(f(node1->content));
		if (!new)
			ft_lstclear(node, del);
		ft_lstadd_back(node, new);
		node1 = node1->next;
	}
	return (node);
}
