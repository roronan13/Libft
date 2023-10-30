NAME	=	libft.a

SRCS	=	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strnstr.c

# compile implicitement en .o
OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-W -Wall -Wextra -Werror

RM		=	rm -rf

CLEAN	=	clean

# make sans argument execute all
all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(AR) rcs $@ $^

# $@ le truc a gauche d'une regle
# $< la dependance la plus a gauche
# $^ toutes les dependances
# $1 $2 la position de la dependance 

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all