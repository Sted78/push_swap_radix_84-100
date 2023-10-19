# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 11:04:09 by svanmarc          #+#    #+#              #
#    Updated: 2023/10/19 18:40:27 by svanmarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

.PHONY: all clean fclean re libft push_swap

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -I/usr/include -g $(INC)

SRC_DIR		= core/
OBJ_DIR		= obj/

SRC		= $(wildcard $(SRC_DIR)*.c)
OBJ		= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

LIBFT_PATH	= ./libft/
LIBFT_NAME	= libft.a
LIBFT_LIB	= $(addprefix $(LIBFT_PATH),$(LIBFT_NAME))

LIB		= -L$(LIBFT_PATH) -lft

INC		= -I./includes -I$(LIBFT_PATH)

all: libft push_swap

libft:
	@make -s -C $(LIBFT_PATH)
	@echo "✅ Libft ok"

push_swap: $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)
	@echo "✅ Push_swap ok"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
	
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "🗑️  Clean ok"

fclean: clean
	@rm -rf $(NAME)
	@make -s -C $(LIBFT_PATH) fclean
	@echo "🗑️  Fclean ok"




	

re: fclean all
	