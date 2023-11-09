/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:04:03 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/09 15:45:58 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ptr;

	i = 0;
	j = ft_strlen(s1);
	k = ft_strlen(set);
	while (s1[i] == set[i])
		i++;
	while (s1[j] == set[k])
	{
		j--;
		k--;
	}
	ptr = malloc(sizeof(char) * (ft_strlen(s1) - i - )
}