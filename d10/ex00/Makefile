# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerien <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 15:09:14 by rmerien           #+#    #+#              #
#    Updated: 2018/08/21 18:12:00 by rmerien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

CC		=		cc

CFLAGS	+=		-Wall -Werror -Wextra

RM		=		/bin/rm -f

HEADERS	=		includes

OBJS	=		ft_putchar.o			\
				ft_putstr.o				\
				ft_strcmp.o				\
				ft_strlen.o				\
				ft_swap.o

SRCS	=		srcs/ft_putchar.c		\
				srcs/ft_putstr.c		\
				srcs/ft_strcmp.c		\
				srcs/ft_strlen.c		\
				srcs/ft_swap.c


all		:		$(NAME)

$(NAME)	:
				@$(CC)  -I$(HEADERS) -c $(SRCS)
				@ar rc $(NAME) $(OBJS)
				@ranlib $(NAME)

clean	:
				@$(RM) $(OBJS)

fclean	:		clean
				@$(RM) $(NAME)

re		:		fclean all
