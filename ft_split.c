/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:50:14 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/14 16:54:18 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			j++;
		i++;
	}
	return (j + 2);
}

/* char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;

	i = 0;
	ptr = (char **)malloc(sizeof(char*) * ft_count(s, c));
	if (!ptr)
		return (NULL);
	
}
	
	if (!ptr[i])
	{
		while (i >= 0)
		{
			free(ptr[i]);
			i--;
		}
	} */

int main()
{
	const char	*s;
	char		c;

	s = "dfghdf";
	c = '\0';
	printf("%ld\n", ft_count(s, c));
}
