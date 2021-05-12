# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 16:31:04 by yejeong           #+#    #+#              #
#    Updated: 2021/05/12 18:13:46 by yejeong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS		= $(wildcard ./src/*.c)
OBJS		= $(SRCS:.c=.o)
NAME		= libft.a
INC_DIR		= includes

.PHONY: clean fclean re all

all : $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC_DIR)

$(NAME) : $(OBJS)
	ar crv $@ $(OBJS)

clean :
	rm -f $(OBJS)

fclean :
	make clean
	rm -f $(NAME)

re :
	make fclean
	make all

test :
	$(CC) -g $(CFLAGS) test.c $(SRCS) -I $(INC_DIR)

