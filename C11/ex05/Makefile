# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/25 02:44:38 by cauvray           #+#    #+#              #
#    Updated: 2024/07/25 03:28:53 by cauvray          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

_SRCS = ft_add.c \
       ft_sub.c \
       ft_mul.c \
       ft_div.c \
       ft_mod.c \
	   ft_putnbr.c \
	   ft_atoi.c \
	   ft_do_op.c
SRCS = ${addprefix srcs/, ${_SRCS}}

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS += -Wall -Wextra -Werror

all:
	@${CC} ${CFLAGS} ${SRCS} -Iincludes -o ${NAME}

clean:
	@rm ${OBJS} -f

fclean:	clean
	@rm ${NAME} -f

.PHONY:	all clean fclean
