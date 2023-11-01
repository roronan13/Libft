/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:58:33 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/01 18:18:20 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;
	char	*src_cpy;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	src_cpy = [ft_strlen(ptr_src) + 1];
	if (!dest && !src)
		return (NULL);
	while (i <= ft_strlen(ptr_src) + 1)
		src_cpy[i] = ptr_src[i];
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = src_cpy[i];
		i++;
	}
	return (ptr_dest);
}
