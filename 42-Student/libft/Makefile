SRCS = $(wildcard sources/*.c)

SRCS_BONUS = $(wildcard sources/bonus/*.c)

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

OBJ_DIR = sources/obj

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -o $@ -I includes

${NAME}: ${OBJS}
	@ar -rcs $@ $^
	@mkdir -p $(OBJ_DIR)
	@mv sources/*.o $(OBJ_DIR)
	@echo "\n\t\e[32mthe library has been created\e[0m\n"

bonus: $(OBJS_BONUS)
	@ar -rc $(NAME) $^
	@mv sources/bonus/*.o $(OBJ_DIR)
	@echo "\n\t\e[32mthe library bonus has been added\e[0m\n"

all: ${NAME}

clean:
	@rm -f ${OBJS_DIR}

fclean: clean
	@rm -f ${NAME}
	@rm -rf ${OBJ_DIR}
	@echo "\n\t\e[31meverything has been removed\e[0m\n"

re: fclean all
