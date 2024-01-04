SRC = src/push_swap.c \
	  src/sort_stack.c \
	  src/cheap_set.c \
	  src/sort_algo.c \
	  src/sort_simple.c \
	  utils/check_args.c \
	  utils/lists.c \
	  utils/lists2.c \
	  operations/swap.c \
	  operations/push.c \
	  operations/rotate.c \
	  operations/reverse_rotate.c \
	  zelete/print_list.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = push_swap



all: ${NAME} clean

%.o:%.c ./include/push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJ}
	@${MAKE} -C ./libft
	@${CC} ${CFLAGS} ${OBJ} ./libft/libft.a -o ${NAME}

clean:
	@${MAKE} -C ./libft clean
	@${RM} ${OBJ}

fclean: clean
	@${MAKE} -C ./libft fclean
	@${RM} ${NAME}

re: fclean all
	@${MAKE} -C ./libft re

