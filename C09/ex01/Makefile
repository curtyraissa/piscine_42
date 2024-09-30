CFLAGS = -Wall -Wextra -Werror
FILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(FILES:.c=.o)

all: libft.a

libft.a: $(OBJS)
	ar rcs libft.a $(OBJS)

%.o: %.c
	cc -c $(CFLAGS) $< -o $@ -I includes/ 

fclean: clean
	rm -f libft.a

clean:
	rm -f $(OBJS)

re: fclean all
