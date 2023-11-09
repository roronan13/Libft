/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:04:03 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/09 17:40:46 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	size_t	m;
	size_t	n;
	char	*ptr;

	i = 0;
	j = 0;
	k = ft_strlen(s1);
	l = ft_strlen(set);
	m = 0;
	n = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] != set[j])
				j++;
		}
		if (j < l)
			i++;
		else
		{
			m = i;
			i = k;
		}
	}
	while (s1[k])
	{
		while (set[l])
		{
			if (s1[k] != set[l])
				l--;
		}
		if (l < ft_strlen(set))
			k--;
		else
		{
			n = k;
			l = ft_strlen(set);
		}
	}
	ptr = malloc(sizeof(char) * (n - m + 1));
	ptr = ft_memcpy(ptr, &s1[m], n - m + 1);
	return (ptr);
}
