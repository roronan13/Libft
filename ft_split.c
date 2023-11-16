/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:50:14 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/16 20:57:56 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			j++;
		i++;
	}
	return (j + 2);
}

static char	*ft_fill(const char *s, char c, size_t j)
{
	char	*ptr;

	while (s[j] && s[j] != c)
		j++;
	ptr = malloc(sizeof(char) * j + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, j);
	return (ptr);
}

void	ft_free(char **ptr, size_t i)
{
	while (i)
	{
		free(ptr[i]);
		i--;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	a;
	size_t	j;

	i = 0;
	a = ft_count(s, c);
	j = 0;
	ptr = (char **)malloc(sizeof(char *) * a);
	if (!ptr)
		return (NULL);
	while (i < a)
	{
		while (s[j] == c)
			j++;
		ptr[i] = ft_fill(s, c, j);
		if (!ptr[i])
		{
			ft_free(ptr, i);
			return (NULL);
		}
		while (s[j] != c)
			j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* 	if (!ptr[i])
	{
		while (i >= 0)
		{
			free(ptr[i]);
			i--;
		}
	} */

/* int main()
{
	const char	*s;
	char		c;

	s = ",,,df,gh,df";
	c = ',';
	printf("%ld\n", ft_count(s, c));
} */
