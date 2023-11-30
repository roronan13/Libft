/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:52:14 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/30 19:42:43 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	t_list	*a;

	if (!lst || !f)
		return;
	f(lst->content);
	while (a->next != NULL)
	{
		
	}
}
