NAME	=	libft.a

SRCS	=	static ft_isalpha.c		/
			static ft_isdigit.c		/
			static ft_isalnum.c		/
			static ft_isascii.c		/
			static ft_isprint.c		/
			static ft_strlen.c		/
			static ft_toupper.c		/
			static ft_tolower.c		/
			static ft_strchr.c		/
			static ft_strrchr.c		/
			static ft_strncmp.c

OBJS	=	$(SRCS:.c=,o)

CC		=	gcc

CFLAGS	+=	-W -Wall -Wextra -Werror

RM		=	rm

CLEAN	=	clean

all		:	
			@make $(NAME)

$(NAME)	:	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) 

clean	:	
			$(RM) $(OBJS)
			@$(CLEAN)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all