/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:25:34 by rpothier          #+#    #+#             */
/*   Updated: 2023/12/01 12:23:33 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*node_temp;

	if (!lst || !del)
		return ;
	if (!*lst)
	{
		//*lst = NULL;
		return ;
	}
	node = *lst;
	while (node)
	{
		node_temp = node;
		del(node->content);
		free(node);
		node = node_temp->next;
	}
	*lst = NULL;
}
