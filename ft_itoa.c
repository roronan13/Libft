/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:39:42 by rpothier          #+#    #+#             */
/*   Updated: 2023/11/13 22:11:02 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	size(int n)
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

static char	*ft_putnbr(char *ptr, int n, int i)
{
	if (n < 0)
	{
		n *= -1;
		ptr[i] = '-';
		i++;
	}
	if (n < 10)
	{
		ptr[i] = n + 48;
		i++;
	}
	else
	{
		ft_putnbr(ptr, n / 10, i);
		ft_putnbr(ptr, n % 10, i);
	}
	ptr[ft_strlen(ptr)] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		a;
	int		i;

	a = size(n);
	i = 0;
	ptr = (char *)malloc(sizeof(char) * a);
	if (!ptr)
		return (NULL);
	if (n == -2147483648)
	{
		ptr = "-2147483648";
		return (ptr);
	}
	
	if (n < 10)
	{
		ptr[i] = n + 48;
		i++;
	}
	else
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int	main()
{
	printf("%d\n", size(INT_MIN));
}
 */