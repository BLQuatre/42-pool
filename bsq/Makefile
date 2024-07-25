NAME = bsq
CC = cc
CFLAGS += -Wall -Wextra -Werror

OBJ_DIR = objs
INC_DIR = includes
SRC_DIR = srcs

_INCS = ft_bsq.h
INCS = $(addprefix $(INC_DIR)/, $(_INCS))

_SRCS = ft_atoi.c \
		ft_charmap_is_valid.c \
		ft_fill_map.c \
		ft_find_square.c \
		ft_lenmap_is_valid.c \
		ft_map_is_valid.c \
		ft_read_first_line.c \
		ft_read_map.c \
		ft_show_map.c \
		ft_strlen.c \
		main.c

SRCS = $(addprefix $(SRC_DIR)/, $(_SRCS))

_OBJS = $(_SRCS:.c=.o)
OBJS = $(addprefix $(OBJ_DIR)/, $(_OBJS))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCS)
	@mkdir objs -p
	$(CC) $(CFLAGS) -c -o $@ $< -I./includes

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all:	$(NAME)

clean:
	rm $(OBJS) -f

fclean:	clean
	rm $(NAME) -f

re:	fclean all

.PHONY:	all clean fclean re
