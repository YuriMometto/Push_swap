NAME = push_swap.a

CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft

LIBFT = libft/includes/libft.a

.c.o:
	cc $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(LIBFT):
	make -C libft/

$(NAME):	$(LIBFT) $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME) -L./$(LIBFT_DIR) -lft

$(OBJ):	$(SRC)
	cc	$(CFLAGS) $< -I./$(LIBFT_DIR)

clean:
	rm -rf $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean:	clean
	rm -rf $(NAME)
	make -C	$(LIBFT_DIR) fclean

re: fclean all
