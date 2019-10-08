CFLAGS=-Wall -Wextra -Werror
HEADERS=libft.h
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
OUTPUT=libft.a

all: $(OUTPUT)

clean:
	-rm -rf $(OBJECTS)

fclean: clean
	-rm -rf $(OUTPUT)

re: clean all

$(OUTPUT): $(OBJECTS)
	ar rs $(OUTPUT) $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: all clean fclean re $(OUTPUT)
