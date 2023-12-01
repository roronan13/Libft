/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:25:34 by rpothier          #+#    #+#             */
/*   Updated: 2023/12/01 15:16:02 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	//t_list	*node_temp;

	if (!lst)
		return ;
	if (!*lst || !del)
	{
		//*lst = NULL;
		return ;
	}
	//node = *lst;
	/* while (node)
	{
		node_temp = node;
		del(node->content);
		free(node);
		node = node_temp->next;
	} */
	node = *lst;
	while (node->next)
	{
		del(node->content);
		node = node->next;
	}
	del(node->content);
	free(node);
	*lst = NULL;
}
