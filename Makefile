NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
    	ft_printf_utils.c \
        ft_printf_char.c \
    	ft_printf_str.c \
        ft_printf_ptr.c \
        ft_printf_nbr.c \
        ft_printf_unsigned.c \
        ft_printf_hex.c \
        ft_printf_percent.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
