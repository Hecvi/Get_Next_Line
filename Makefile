# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klaurine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 19:40:59 by klaurine          #+#    #+#              #
#    Updated: 2020/02/02 14:46:54 by klaurine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = get_next_line.c

OBJECTS = get_next_line.o

FLAGS = -Wall -Wextra -Werror

all:
	make -C libft/ fclean && make -C libft/
	clang $(FLAGS) -I libft/includes -o $(OBJECTS) -c $(SOURCE)
	clang $(FLAGS) -I libft/includes -o main.o -c main_second.c
	clang -o test_gnl main.o $(OBJECTS) -I libft/includes -L libft/ -lft

clean:
	rm -f *.o
	rm -f test_gnl

fclean: clean
	make -C libft/ fclean

re:
	fclean all
