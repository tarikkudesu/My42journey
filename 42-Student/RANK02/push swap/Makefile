SRC = src/push_swap.c src/sort_stack.c src/cheap_set.c src/sort_algo.c src/sort_simple.c \
	  utils/check_args.c utils/lists.c \
	  libft/ft_atoi.c libft/ft_isdigit.c libft/ft_split.c libft/ft_putstr_fd.c \
	  operations/swap.c operations/push.c operations/rotate.c operations/reverse_rotate.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = push_swap

all: ${NAME}

%.o:%.c ./include/push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJ}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
