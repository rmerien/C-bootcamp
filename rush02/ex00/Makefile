# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerien <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 11:31:35 by rmerien           #+#    #+#              #
#    Updated: 2018/08/19 22:16:30 by llassall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	colle-2

CC		=	cc

CFLAGS	+=	-Wall -Werror -Wextra

RM		=	rm -f

CLEAN	=	clean

LIB		=	-L. -lrush

OBJC	=	$(SRCS:.c=.o)

SRCS	=	


all		:	$(NAME)

$(NAME)	:	$(OBJS)
		@$(CC) -o $(NAME) $(OBJS) $(LIB)


clean	:
		@$(RM) *.o


fclean	:	clean
	@$(RM) $(NAME)


re		:	fclean all
