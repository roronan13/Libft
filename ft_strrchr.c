/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:06:58 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 17:41:47 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return (&s[i]);
	else
	{
		while (s[i] != c && i > 0)
			i--;
		if (s[i] == c)
			return (&s[i]);
		else
			return (NULL);
	}
}

/*int	main(void)
{
	char	*s;
	int		c;

	s = "Allo oui.";
	c = 'A';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}*/
