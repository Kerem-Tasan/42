NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_LIB = ./libft/libft.a
PRINTF_LIB = ./ft_printf/libftprintf.a

SRCS = push_swap.c takeargument.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_LIB) $(PRINTF_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) $(PRINTF_LIB) -o $(NAME)

clean:
	rm -f $(OBJS)
	make clean -C libft
	make clean -C ft_printf

fclean: clean
	rm -f $(NAME)
	make fclean -C libft
	make fclean -C ft_printf

re: fclean all
