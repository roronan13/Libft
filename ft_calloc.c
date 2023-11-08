/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:12:12 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/08 15:19:00 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nmemb);
	//if (!ptr)
	//	return (NULL);
	ft_bzero(ptr, nmemb);
	//if (nmemb == 0 || size == 0)
	//	return (NULL);
	return (ptr);
}
