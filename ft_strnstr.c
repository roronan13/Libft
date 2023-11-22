/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:00:17 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/23 00:23:42 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (little[j] == big[i])
		{
			while (little[j] && big[i] && little[j] == big[i] && i < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i - j]);
				i++;
				j++;
			}
			i -= j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
