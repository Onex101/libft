NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				

OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

copy:
	cp -f lib-funcs/*.c .

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES) 

fclean: clean
	rm -f $(NAME)

re: fclean all
