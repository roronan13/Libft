/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:25:00 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/31 14:57:07 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	initial_dst_size;

	i = 0;
	j = 0;
	initial_dst_size = ft_strlen(dst);
	if (initial_dst_size > size)
		return (size + ft_strlen(src));
	if (size != 0)
	{
		while (dst[i])
			i++;
		while (src[j] && j < size - 1 && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src) + initial_dst_size);
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