# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: renrodri <renrodri@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 16:18:40 by renrodri          #+#    #+#              #
#    Updated: 2025/02/13 16:56:43 by renrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(H_DIR) -I $(LIBFT_DIR)
RM = rm -f

SRC_DIR = src/
OBJ_DIR = build/
H_DIR = includes/
LIBFT_DIR = libft/

H_SRCS = pipex.h 
HEADER = $(addprefix $(H_DIR), $(H_SRCS))

SRC_FILES = pipex.c pipex_utils.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

LIBFT = $(LIBFT_DIR)libft.a

#colors
GREEN   = \033[1;32m
BLUE    = \033[1;36m
PINK    = \033[1;35m
DEFAULT = \033[0m

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADER) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo -e "$(GREEN)Congratulations! Your $(NAME) is ready!$(DEFAULT)"

$(LIBFT):
	@make -C $(LIBFT_DIR)

#main rules
all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@make clean -C $(LIBFT_DIR)
	@echo -e "$(BLUE)All object files have been removed!$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@echo -e "$(PINK)$(NAME) has been removed!$(DEFAULT)"

re: fclean all

.PHONY: all clean fclean re
