LIB_NAME = libft.a

MY_SRCS = srcs/ft_putchar.c \
	  srcs/ft_swap.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strlen.c \
	  srcs/ft_strcmp.c

MY_OBJS = ${MY_SRCS:.c=.o}

CFLAGS += -Wall -Wextra -Werror







all: libft.a

libft.a:
	echo lib

clean:
	rm ${MY_OBJS} -f

cleanf: clean
	rm libft.a -f

re: fclean
	echo re

