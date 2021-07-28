# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asaffroy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 17:12:14 by asaffroy          #+#    #+#              #
#    Updated: 2021/07/28 11:28:04 by asaffroy         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC = main.c oper.c print.c 

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRC:.c=.o}

all: ${OBJS}

	gcc ${OBJS} -o do-op

.c.o :

	gcc -c $< -o ${<:.c=.o}

clean :

	rm -f ${OBJS}

fclean : clean

	rm -f do-op

re : fclean all
