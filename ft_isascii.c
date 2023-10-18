/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:03:53 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/18 19:15:20 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;

	a = 130;
	printf("%d\n", ft_isascii(a));
	printf("%d\n", isascii(a));
	return (0);
}*/
