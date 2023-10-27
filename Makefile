# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 14:44:18 by lbirloue          #+#    #+#              #
#    Updated: 2023/10/25 15:02:52 by lbirloue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	 libftprintf.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	-I libft.h

SRCS		=	 \


OBJS		=	${SRCS:.c=.o}



all:		${NAME}


${NAME}:	${OBJS}
	ar -rc ${NAME} ${OBJS}


%.o:		%.c
	@${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@


clean:
	rm -f ${OBJS}


fclean:		clean
	rm -f ${NAME}


re:			fclean all


.PHONY:		all clean fclean re 