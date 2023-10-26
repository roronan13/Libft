/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:33:17 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 17:41:54 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = s;
	if (c == '\0')
	{
		while (s[i])
			i++;
		ptr = &s[i];
		return (ptr);
	}
	else
	{
		while (s[i] != c && s[i])
			i++;
		if (s[i] == c)
		{
			ptr = &s[i];
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
