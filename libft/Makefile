CFLAGS=-Wall -Wextra -Werror
HEADERS=libft.h
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
NAME=libft.a

all: $(NAME)

clean:
	-rm -rf $(OBJECTS)

fclean: clean
	-rm -rf $(NAME)

re: clean all

$(NAME): $(OBJECTS)
	ar rs $(NAME) $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: all clean fclean re $(OUTPUT)
