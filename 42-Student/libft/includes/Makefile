SRCS = main.c \
       sources/ft_atoi.c \
       sources/ft_strlen.c \
       sources/ft_isalpha.c \
       sources/ft_isdigit.c \
       sources/ft_isascii.c \
       sources/ft_isalnum.c \
       sources/ft_isprint.c \
       sources/ft_toupper.c \
       sources/ft_tolower.c \
       sources/ft_strncmp.c \
       sources/ft_strchr.c \
       sources/ft_strrchr.c \
       sources/ft_memchr.c \
       sources/ft_memcmp.c \
       sources/ft_strnstr.c \
       sources/ft_memset.c \
       sources/ft_memcpy.c \
       sources/ft_strlcpy.c \
       sources/ft_strlcat.c \
       sources/ft_calloc.c \
       sources/ft_strdup.c \
       sources/ft_substr.c \
       sources/ft_bzero.c \
       sources/ft_strjoin.c \
       sources/ft_strtrim.c \
       sources/ft_split.c \
       sources/ft_itoa.c \
       sources/ft_strmapi.c \
       sources/ft_striteri.c \
       sources/ft_putchar_fd.c \
       sources/ft_putstr_fd.c \
       sources/ft_putendl_fd.c \
       sources/ft_putnbr_fd.c \
       sources/bonus/ft_lstnew.c \
       sources/bonus/ft_lstadd_front.c \
       sources/bonus/ft_lstadd_back.c \
       sources/bonus/ft_lstsize.c \
       sources/bonus/ft_lstlast.c \
       sources/bonus/ft_lstdelone.c \
       sources/bonus/ft_lstclear.c \
       sources/bonus/ft_lstiter.c \
       sources/bonus/ft_lstmap.c

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -std=c99

NAME = program

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS} -I includes

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all
