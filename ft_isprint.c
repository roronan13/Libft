/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:19:16 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 17:37:17 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;

	a = 31;
	printf("%d\n", ft_isprint(a));
	printf("%d\n", isprint(a));
	return (0);
}*/
