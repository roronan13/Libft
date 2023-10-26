/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:26:47 by rpothier          #+#    #+#             */
/*   Updated: 2023/10/26 19:40:34 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_isalpha(int a);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
int		ft_isascii(int a);
int		ft_isprint(int a);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t a);
size_t	ft_strlcat(char *dst, const char *src, size_t a);
int		ft_toupper(int a);
int		ft_tolower(int a);
char	*ft_strchr(const char *s, int a);
char	*ft_strrchr(const char *s, int a);
int		ft_strncmp(const char *s1, const char *s2, size_t a);

#endif