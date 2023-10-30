/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:40:06 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/30 22:24:57 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	char		*dst;
	const char	*src;
	size_t		dstsize;

	src = "Allo";
	dstsize = 2;
	dst = (char *)malloc(sizeof(char) * dstsize + 1);
	printf("%ld\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);
}*/
