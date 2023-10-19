/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:46:16 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/19 19:06:27 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		*s[i] = c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char				*s;
	int					i;
	int					c;
	long unsigned int	n;

	s = "Oui bonjour.";
	i = 0;
	c = 1;
	n = 4;
	ft_memset(s, c, n);
	/*while (ft_memset(s, c, n))
	{
		write(1, s[i], 1);
		i++;
	}
	write(1, '\n', 1);*/
	return (0);
}
