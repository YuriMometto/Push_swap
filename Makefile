NAME = push_swap.a

CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c utils.c lst_create.c move1.c

OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
	make -C ./libft
	cc $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME) 
.c.o:
	cc $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

clean:
	rm -rf $(OBJ)
	make -C ./libft fclean

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
