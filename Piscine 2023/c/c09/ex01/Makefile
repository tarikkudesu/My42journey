# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamehri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 13:20:37 by tamehri           #+#    #+#              #
#    Updated: 2023/10/05 08:35:55 by tamehri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

%.o : %.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o} -I includes

all: $(NAME)

$(NAME): ${SRCS:.c=.o}
	ar rcs $(NAME) ${SRCS:.c=.o}

clean:
	rm -f ${SRCS:.c=.o}

fclean : clean
	rm -f $(NAME)

re: fclean all
