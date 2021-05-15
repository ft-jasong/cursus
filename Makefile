CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a

SOURCES = ft_atoi.c ft_toupper.c ft_tolower.c \
		  ft_isascii.c ft_isprint.c ft_isdigit.c \
		  ft_isalpha.c ft_isalnum.c ft_strncmp.c \
		  ft_strlen.c ft_strlcpy.c ft_memset.c ft_bzero.c \
		  ft_memcpy.c ft_strchr.c ft_strrchr.c ft_memccpy.c ft_memmove.c \
		  ft_strdup.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strnstr.c ft_calloc.c \
		  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJECTS)
	ar -cr $@ $^

clean:
	rm -f $(OBJECTS) $(BOBJS)

bonus: $(OBJECTS) $(BOBJS)
	ar -cr $(NAME) $^

fclean: clean
	rm -f $(NAME)

re: fclean all
