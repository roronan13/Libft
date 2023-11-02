/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:58:33 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/02 12:34:25 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*ptr_dest;
	unsigned const char	*ptr_src;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned const char *)src;
	if (!dest && !src)
		return (NULL);
	//if (ft_strlen(ptr_src) > ft_strlen(ptr_dest))
	if (ptr_src < ptr_dest)
	//if (&ptr_src < &ptr_dest)
	{
		i = n - 1;
		j = n - 1;
		while (k < n)
		{
			ptr_dest[j] = ptr_src[i];
			i--;
			j--;
			k++;
		}
		return (ptr_dest);
	}
	else
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
		return (ptr_dest);
	}
}
