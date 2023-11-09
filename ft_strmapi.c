/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:24:34 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/09 20:41:55 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;
	size_t	size;

	i = 0;
	size = ft_strlen(s) + 1;
	while (s[i])
	{
		f(i, s[i]);
		i++;
	}
	ptr = malloc(sizeof(char) * (size));
	ptr = ft_strlcpy(ptr, s, size);
	return (ptr);
}
