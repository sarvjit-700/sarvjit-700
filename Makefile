NAME = libft.a
INC = libft.h

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
	 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	 ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c\
	 ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c

BSFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c

OFILES = $(CFILES:.c=.o)
BSOBJ = $(BSFILES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra


all: $(NAME)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OFILES)
	echo "Creating libft.a"
	ar rcs $(NAME) $(OFILES)
	echo "--- Done ---"

bonus: $(OFILES) $(BSOBJ)
	ar rcs $(NAME) $(OFILES) $(BSOBJ)

clean:
	echo "Running clean"
	rm -f $(OFILES) $(BSOBJ)
	echo "--- Done ---"

fclean: clean
	echo "Running fclean"
	rm -f $(NAME)
	echo "--- Done ---"

re: fclean all

.PHONY: all clean fclean re bonus
