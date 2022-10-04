# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 08:31:57 by cmartino          #+#    #+#              #
#    Updated: 2022/10/04 08:31:59 by cmartino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c \
			ft_isdigit.c \

OBJS	= ${SRCS:.c=.o}

//HEADER	= includes/ //

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}
all :	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
