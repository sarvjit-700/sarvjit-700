CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
	 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	 ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c\

OFILES = $(CFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -std=c99

NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OFILES)
	echo "Creating libft.a"
	ar rcs $(NAME) $(OFILES)
	echo "--- Done ---"

clean:
	echo "Running clean"
	rm -f $(OFILES)
	echo "--- Done ---"

fclean: clean
	echo "Running fclean"
	rm -f $(NAME)
	echo "--- Done ---"

re: fclean all clean
