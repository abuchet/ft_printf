# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 14:14:59 by abuchet           #+#    #+#              #
#    Updated: 2023/02/08 15:20:13 by abuchet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_itoa.c \
		ft_putchar_fd.c \

HEAD = includes

OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror

.c.o:
	gcc ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}


$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

all : $(NAME)

bonus: ${NAME}
	ar rc ${NAME}
	ranlib libft.a


clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re
