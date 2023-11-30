/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:25:34 by rpothier          #+#    #+#             */
/*   Updated: 2023/12/01 00:48:33 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (!lst || !del)
		return ;
	if (!*lst)
	{
		//*lst = NULL;
		return ;
	}
	a = *lst;
	while (a != NULL)
	{
		del(a->content);
		free(a);
		a = a->next;
	}
	*lst = NULL;
}
