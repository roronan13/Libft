/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:31:03 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 17:37:26 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int a)
{
	if (a >= 65 && a <= 90 || a >= 97 && a <= 122 || a >= 48 && a <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;

	a = 125;
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", isalnum(a));
	return (0);
}*/