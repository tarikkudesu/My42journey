SRCS = get_next_line.c \
       get_next_line_utils.c \
       main.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rc
RM = rm -f
ECHO = echo

GREEN = \033[1;31m
RED = \033[1:32m
NONE = \033[0m

%.o:%.c
	@$(CC) $(CFLAGS) -c $^ -I .

$(NAME): $(OBJS)
	@$(AR) $(NAME) $^
	@$(ECHO) "$(GREEN)\n\tthe library has been created\\n$(NONE)"

all: $(NAME)

compile: $(OBJS)
	@$(CC) $(CFLAGS) $^ -o program
	@${ECHO} "\n\t${GREEN}The program has been created${NONE}\n"

it: compile clean

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@${ECHO} "\n\t${RED}everything has been removed${NONE}\n"

re: fclean all

.PHONY: all clean fclean re
