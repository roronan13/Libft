/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:48:39 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/08 17:52:55 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	const char	*ptr2;

	if (len > ft_strlen(s) - start)
		ptr = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, ptr2, len);
	return (ptr);
}
