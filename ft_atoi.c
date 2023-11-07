/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:04:50 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/07 21:26:02 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int a)
{
	if (a == 32 || (a >= 9 && a <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned char	*ptr;
	int				i;
	int				a;
	int				resu;

	ptr = (unsigned char *)nptr;
	i = 0;
	resu = 0;
	a = 1;
	while (ft_isspace(ptr[i]))
		i++;
	while (ft_isdigit(ptr[i]))
		i++;
	i -= 1;
	while (ft_isdigit(ptr[i]) && i >= 0)
	{
		resu += (ptr[i] - 48) * a;
		a *= 10;
		i--;
	}
	if (ptr[i - 1] == '-')
		return (-resu);
	return (resu);
}
