/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:40:06 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/20 13:36:33 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (2);
}

int	main(void)
{
	char		*dst;
	const char	*src;
	size_t		dstsize;

	dst = "Bonj";
	src = "Allo";
	dstsize = 3;
	printf("%ld\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%s\n", src);
	//printf("%ld\n", strlcpy(dst, src, dstsize));
	return (0);
}
