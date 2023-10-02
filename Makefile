# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 08:55:07 by svanmarc          #+#    #+#              #
#    Updated: 2023/10/02 09:25:17 by svanmarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

.phony: all clean fclean re libft push_swap

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror

SRC_DIR		= core/
OBJ_DIR		= obj/

SRC_DIR		= $(wildcard $(SRC_DIR)*.c)
OBJ_DIR		= $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC_DIR))

LIBFT_PATH	= ./libft/
LIBFT_NAME	= libft.a
LIBFT_LIB	= $(addprefix $(LIBFT_PATH), $(LIBFT_NAME))

LIB		= -L$(LIBFT_PATH) -lft

INC		= -I./Includes -I$(LIBFT_PATH)

all: libft push_swap

libft:
	@make -s -C $(LIBFT_PATH)
	@echo "✅ Libft ok"

$(NAME): $(OBJ_DIR)
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJ_DIR) $(LIB) -o $(NAME)
	@echo "✅ Push_swap ok"
	@echo "✅ jusqu'ici tout va bien"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@make clean -C $(LIBFT_PATH)
	@echo "🗑️  Clean ok"

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIBFT_PATH)
	@echo "🧽  Fclean ok"

re: fclean all