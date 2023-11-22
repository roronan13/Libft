/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:06:58 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/22 22:21:25 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	while (s[i])
		i++;
	if (a == '\0')
		return ((char *)&s[i]);
	else
	{
		while (s[i] != a && i > 0)
			i--;
		if (s[i] == a)
			return ((char *)&s[i]);
		else
			return (NULL);
	}
}
