/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:33:17 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/27 16:09:16 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	if (c == '\0')
	{
		while (s[i])
			i++;
		ptr = (char *)&s[i];
		return (ptr);
	}
	else
	{
		while (s[i] != c && s[i])
			i++;
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		else
			return (NULL);
	}
}

/*int	main(void)
{
	char	*s;
	int		c;

	s = "Allo oui.";
	c = 'k';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}*/
