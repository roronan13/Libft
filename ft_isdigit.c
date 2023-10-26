/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:29:44 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 17:37:45 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;

	a = 60;
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", isdigit(a));
	return (0);
}*/
