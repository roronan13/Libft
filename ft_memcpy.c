/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:33:55 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/31 19:44:39 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)src;
	while (i < n && dest[i] && src[i])
	{
		dest[i] = ptr[i];
		i++;
	}
	return (dest);
}
