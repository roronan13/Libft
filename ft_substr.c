/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:48:39 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/08 19:19:08 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*s_copy;
	size_t	i;

	i = 0;
	s_copy = (char *)s;
	if (start >= ft_strlen(s))
	{
		ptr = malloc(sizeof(char) * 1);
		return (ptr);
	}
	if (len > ft_strlen(s) - start)
		ptr = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s_copy[start] && i < len)
	{
		ptr[i] = s_copy[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
