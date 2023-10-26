/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:40:06 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 19:42:26 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
//#include "ft_strlen.c"
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
	return (ft_strlen(src));
}

int	main(void)
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
}
