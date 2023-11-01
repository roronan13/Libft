/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:58:33 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/01 21:39:32 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (ft_strlen(ptr_src) > ft_strlen(ptr_dest))
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
