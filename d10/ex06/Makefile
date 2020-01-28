# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerien <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 01:32:08 by rmerien           #+#    #+#              #
#    Updated: 2018/08/22 13:25:47 by rmerien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

CC		=	cc

CFLAGS	+=	-Wall -Werror -Wextra

RM		=	/bin/rm -f

HEADERS	=	includes

SRCS	=	srcs/do_op.c				\
			srcs/ft_operations.c		\
			srcs/ft_conditions.c		\
			srcs/ft_useful.c


all		:		$(NAME)

$(NAME)	:
				@$(CC) -I$(HEADERS) $(SRCS) -o $(NAME)

clean	:
				@$(RM) $(NAME)

fclean	:		clean

re		:		fclean all
