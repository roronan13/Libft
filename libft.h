#ifndef LIBFT_H
#define LIBHT_H
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int		ft_isalpha(int a);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
int		ft_isascii(int a);
int		ft_isprint(int a);
size_t	ft_strlen(const char *s);
int		ft_toupper(int a);
int		ft_tolower(int a);
char	*ft_strchr(const char *s, int a);
char	*ft_strrchr(const char *s, int a);
int		ft_strncmp(const char *s1, const char *s2, size_t a);

#endif