# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktasan <ktasan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/13 15:45:26 by ktasan            #+#    #+#              #
#    Updated: 2025/07/05 03:33:41 by ktasan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_whatisletter.c \
		ft_print_percent.c ft_putchar.c ft_putstr.c ft_putnbr.c\
		ft_strlen.c ft_itoa.c ft_print_unsigned.c ft_print_pointer.c \
		ft_putnbr_base.c ft_print_bigx.c ft_print_x.c

		
OBJS = $(SRCS:.c=.o)


all: $(NAME)

bonus: $(OBJS) 

	ar rcs $(NAME) $(OBJS) 

$(NAME): $(OBJS) $(LIBFT_LIB)
	ar rcs $(NAME)  $(OBJS) 


clean:
	rm -f $(OBJS)
	

fclean: clean
	rm -f $(NAME)


re: fclean all

.PHONY: all bonus clean fclean re