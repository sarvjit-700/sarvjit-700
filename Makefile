CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
	 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c
OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -std=c99

NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
