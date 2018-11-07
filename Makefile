# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aessaid <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/13 11:39:07 by aessaid           #+#    #+#              #
#    Updated: 2018/10/13 11:50:56 by aessaid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

$(NAME):
	gcc -Wall -Werror -Wextra -c *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
