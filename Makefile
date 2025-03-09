NAME = push_swap

CC = cc

CCFLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

HEADER_DIR = include

FILENAMES = manipulate_stack print_utils swap push rotate reverse_rotate \
			utils valid_utils sort init

PREFIX_FILENAMES = $(addprefix src/ft_, $(FILENAMES))
SRCS = $(addsuffix .c, $(PREFIX_FILENAMES))
MANDATORY_MAIN = src/ft_main.c

GNL_DIR = gnl
GNL = gnl/get_next_line.c gnl/get_next_line_utils.c
BONUS_MAIN = src/ft_checker.c

all: $(NAME)

$(NAME): $(HEADER_DIR)/ft_push_swap.h $(LIBFT) $(SRCS) $(MANDATORY_MAIN)
	$(CC) $(CCFLAGS) -I$(HEADER_DIR) $(MANDATORY_MAIN) $(SRCS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft bonus

clean:
	make -C libft clean

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

bonus: $(HEADER_DIR)/ft_push_swap.h $(GNL_DIR)/get_next_line.h $(LIBFT) $(SRCS) $(BONUS_MAIN) $(GNL)
	$(CC) $(CCFLAGS) -I$(HEADER_DIR) -I$(GNL_DIR) $(BONUS_MAIN) $(SRCS) $(LIBFT) $(GNL) -o checker

re: fclean all

.PHONY: all clean fclean re bonus