# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 11:41:13 by mervenuryil       #+#    #+#              #
#    Updated: 2023/06/30 16:52:21 by mervenuryil      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
SRC = 	main.c \
		swap.c \
		push.c \
		rotate.c \
		reverse.c \
		random.c\
		checkered_flag.c \
		utils_A.c \
		utils_B.c \
		utils_C.c \

OBJ= $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
SEG = -fsanitize=address
R = \033[1;41m
G = \033[1;42m
Y = \033[1;43m
B = \033[1;44m
P = \033[1;45m
LB = \033[1;46m
W = \033[1;47m

END = \033[1;0m

.SILENT:

all:
	gcc $(SRC) $(SEG) -o push_swap
	echo "$(W) Compiled - to run enter './push_swap <numbers>' $(END)"
	echo "$(LB) To run with a missing argument enter 'make mis' $(END)"
	echo "$(LB) To run a default stack enter 'make def' $(END)"
	echo "$(LB) To run a failed stack enter 'make err' $(END)"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f push_swap
	echo "$(R) All files have been removed. $(END)"

re: fclean all

def:
	echo "$(P) Default is running $(END)"
	./push_swap "2 6 843 9 5 4 9 3"

mis:
	echo "$(Y) Missing argument has given to the program $(END)"
	./push_swap 

err:
	echo "$(Y) Failed argument has given to the program $(END)"
	./push_swap "2 6 eight 9 5 4 9 3"

.PHONY: all clean fclean re def mis err