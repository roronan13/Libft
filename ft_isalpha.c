/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:45:11 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/18 15:43:06 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int a)
{
	if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;

	a = ';';
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", isalpha(a));
	return (0);
}*/
