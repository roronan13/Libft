/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:40:06 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/20 13:25:03 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int srcsize;

	i = 0;
	srcsize = 0;
	while (src[i])
	{
		i++;
		srcsize++;
	}
	i = 0;
	while (src[i] && dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (dst[i])
	{
		dst[i] = '\0';
		i++;
	}
	return (srcsize);
}
