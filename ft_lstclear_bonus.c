/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:25:34 by rpothier          #+#    #+#             */
/*   Updated: 2023/12/01 16:01:20 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*node_temp;

	if (!lst || !*lst)
		return ;
	if (!del)
	{
		*lst = NULL;
		return ;
	}
	node = *lst;
	while (node->next)
	{
		del(node->content);
		node_temp = node->next;
		free(node);
		node = node_temp;
	}
	del(node->content);
	free(node);
	*lst = NULL;
}
