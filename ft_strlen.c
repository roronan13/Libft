/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:29:21 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 17:41:16 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	long unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	*s;

	s = "";
	printf("%ld\n", ft_strlen(s));
	printf("%ld\n", strlen(s));
	return (0);
}*/
