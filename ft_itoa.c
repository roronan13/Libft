/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:39:42 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/13 23:56:58 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (2);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

static void	ft_putnbr(char *ptr, int n, int i, int size)
{
	//i++;
	if (n < 0)
	{
		n *= -1;
		ptr[i] = '-';
		i++;
	}
	if (n < 10)
	{
		ptr[i] = n + 48;
		//i++;
	}
	else
	{
		//i++;
		ft_putnbr(ptr, n / 10, i, size);
		ft_putnbr(ptr, n % 10, i, size);
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		size;

	size = ft_size(n);
	i = 0;
	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	if (n == -2147483648)
	{
		ptr = "-2147483648";
		return (ptr);
	}
	ft_putnbr(ptr, n, i, size);
	ptr[size - 1] = '\0';
	return (ptr);
}
