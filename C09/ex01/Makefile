# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cauvray <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 15:20:14 by cauvray           #+#    #+#              #
#    Updated: 2024/07/17 16:40:17 by cauvray          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putchar.c \
       ft_swap.c \
       ft_putstr.c \
       ft_strlen.c \
       ft_strcmp.c

OBJS = $(addprefix srcs/, ${SRCS:.c=.o})

%.o : %.c
	gcc -Wall -Wextra -Werror -c -Iincludes $< -o ${<:.c=.o}


${NAME}:	${OBJS}
	ar -rcs $@ $^

all:	${NAME}

clean:
	rm ${OBJS} -f

fclean:	clean
	rm ${NAME} -f

re:	fclean all

.PHONY:	all clean fclean re
