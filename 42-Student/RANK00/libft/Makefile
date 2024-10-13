PURPLE = \033[1;35m
RED = \033[1;32m
NONE = \033[0m

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_memset.c \
	   ft_split.c \
	   ft_strchr.c \
	   ft_strdup.c \
	   ft_strjoin.c \
	   ft_strlen.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \

SRCS_B = ft_lstnew_bonus.c \
		 ft_lstadd_front_bonus.c \
		 ft_lstsize_bonus.c \
		 ft_lstlast_bonus.c \
		 ft_lstadd_back_bonus.c \
		 ft_lstdelone_bonus.c \
		 ft_lstclear_bonus.c \
		 ft_lstiter_bonus.c \
		 ft_lstmap_bonus.c

OBJS_B = ${SRCS_B:.c=.o}

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar cr
ECHO = echo
RM = rm -f

NAME = libft.a

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -I .
# this code worked fine with moulinette
# but this is the correct form
# %.o: %.c libft.h
# 	@$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	@$(AR) $(NAME) $^
	@$(ECHO) "\n\t$(PURPLE)the library has been created$(NONE)\n"

all: $(NAME)

bonus: $(OBJS_B)
	@$(AR) $(NAME) $^
	@$(ECHO) "\n\t$(PURPLE)the bonus has been added$(NONE)\n"

clean:
	@$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "\n\t$(RED)everything has been removed$(NONE)\n"

re: fclean all

.PHONY: all clean fclean re
