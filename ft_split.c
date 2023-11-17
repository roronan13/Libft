/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:50:14 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/17 18:49:05 by rpothier         ###   ########.fr       */
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
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static char	*ft_fill(const char *s, char c, size_t j)
{
	char		*ptr;
	const char	*ptr2;
	size_t		i;

	i = 0;
	if (ft_strlen(s) == 0)
		return (NULL); 
	while (s[j] && s[j] != c)
	{
		j++;
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr2 = &s[j - i];
	ft_strlcpy(ptr, ptr2, i + 1);
	return (ptr);
}

static void	ft_free(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ptr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ptr || !s)
		return (NULL);
	while (i < ft_count(s, c))
	{
		while (s[j] == c)
			j++;
		ptr[i] = ft_fill(s, c, j);
		if (!ptr[i])
		{
			ft_free(ptr);
			return (NULL);
		}
		while (s[j] != c && s[j])
			j++;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

/*if (!ptr[i])
	{
		while (i >= 0)
		{
			free(ptr[i]);
			i--;
		}
	}
*/

/* int main()
{
	char		c;
	char	**ptr;
	char *splitme = ft_strdup("Tripouille");
	

	c = ' ';
	ptr = ft_split(splitme, c);
	//printf("%ld\n", ft_count(splitme, c));
} */
