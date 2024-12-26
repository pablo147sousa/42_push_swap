NAME = push_swap

CC = cc
CC_FLAGS = -Wall -Werror -Wextra -g

RM = rm -rf

C_SOURCE = push_swap.c parse.c ft_nodes.c
H_SOURCE = push_swap.h

OBJ = $(C_SOURCE:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CC_FLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CC_FLAGS) -I ./ -c $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "Making libft"

clean:
	$(RM) $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
