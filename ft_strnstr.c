/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:00:17 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/27 13:59:56 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

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

/*int	main(void)
{
	char	*big;
	char	*little;
	size_t	len;

	big = "Bonjour je suis.";
	little = "je";
	len = 9;
	printf("%s\n", ft_strnstr(big, little, len));
	//printf("%s\n", strnstr(big, little, 2));
	return (0);
}*/
