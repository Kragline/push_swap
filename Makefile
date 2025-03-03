NAME = push_swap

CC = cc

CCFLAGS = -Wall -Wextra -Werror

SRCS = src/ft_main.c src/ft_manipulate_stack.c src/ft_print_utils.c

LIBFT = libft/libft.a

HEADER_DIR = include

all: $(NAME)

$(NAME): Makefile $(HEADER_DIR)/ft_push_swap.h $(LIBFT) $(SRCS)
	$(CC) $(CCFLAGS) -I$(HEADER_DIR) $(SRCS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft bonus

clean:
	make -C libft clean

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re