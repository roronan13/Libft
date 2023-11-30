/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:02:39 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/30 20:48:14 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	size;
	t_list	*new;
	t_list	*a;
	
	if (!lst || !f)
		return (NULL);
	a = lst;
	size = ft_lstsize(lst);
	new = malloc(sizeof(t_list) * (size + 1));
	if (!new)
		return (NULL);
	while (a != NULL)
	{
		new->content = f(a->content);
		new = new->next;
		a = a->next;
	}
	return (new);
}
