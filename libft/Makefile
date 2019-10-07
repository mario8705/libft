CFLAGS=-Wall -Wextra -Werror
HEADERS=ft.h
SOURCES=ft_bzero.c   ft_isalpha.c ft_isdigit.c ft_memccpy.c ft_memcmp.c  ft_memmove.c ft_strchr.c  ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c  ft_memcpy.c  ft_memset.c  ft_strlen.c  ft_toupper.c
OBJECTS=$(SOURCES:.c=.o)
OUTPUT=libft.a

all: $(OUTPUT)

clean:
	-rm -rf $(OBJECTS)

fclean: clean
	-rf -rf $(OUTPUT)

re: clean all

$(OUTPUT): $(OBJECTS) $(HEADERS)
	ar rs $(OUTPUT) $(OBJECTS)

.PHONY: all clean fclean re $(OUTPUT)

