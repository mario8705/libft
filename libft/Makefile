CFLAGS=-Wall -Wextra -Werror
HEADERS=libft.h
SOURCES  = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c
SOURCES := $(SOURCES) ft_bzero.c ft_isascii.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_calloc.c
SOURCES := $(SOURCES) ft_isdigit.c ft_memccpy.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_isalnum.c
SOURCES := $(SOURCES) ft_isprint.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c
SOURCES_BONUS  = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c
SOURCES_BONUS := $(SOURCES_BONUS) ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJECTS=$(SOURCES:.c=.o)
OBJECTS_BONUS=$(SOURCES_BONUS:.c=.o)
NAME=libft.a

all: $(NAME)

clean:
	-rm -rf $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	-rm -rf $(NAME)

re: clean all

$(NAME): $(OBJECTS)
	ar rs $(NAME) $(OBJECTS)

bonus: $(OBJECTS) $(OBJECTS_BONUS)
	ar rs $(NAME) $(OBJECTS) $(OBJECTS_BONUS)

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: all clean fclean re $(OUTPUT)
