# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 17:43:44 by sagemura          #+#    #+#              #
#    Updated: 2024/02/27 18:09:08 by sagemura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = utils.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = get_len.c get_atoi.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 
