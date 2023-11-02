/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:04:50 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/02 16:37:08 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned char	*ptr;
	int				i;
	int				a;
	int				resu;

	ptr = (unsigned char*)nptr;
	i = 0;
	resu = 0;
	a = 1;
	while (!ft_isdigit(ptr[i] - 48))
		i++;
	while (ft_isdigit(ptr[i] - 48))
		i++;
	while (ft_isdigit(ptr[i] - 48))
	{
		resu += (ptr[i] - 48) * a;
		a *= 10;
		i--;
	}
	if (ptr[i - 1] == '-')
		return (-resu);
	return (resu); 
}
