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
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (src[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

/*int	main(void)
{
	char		*dst;
	const char	*src;
	size_t		dstsize;

	src = "Allo";
	dstsize = 2;
	dst = malloc(sizeof(char) * dstsize + 1);
	printf("%ld\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);
}*/