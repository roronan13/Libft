/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:25:00 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/30 22:15:57 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && j < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char		*dst;
	const char	*src;
	size_t		size;

	src = " Allo";
	size = 9;
	dst = malloc(sizeof(char) * 20);
	dst[0] = 'O';
	dst[1] = 'u';
	dst[2] = 'i';
	printf("%ld\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);
}*/