# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akalombo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 10:57:08 by akalombo          #+#    #+#              #
#    Updated: 2019/05/24 13:39:14 by akalombo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC= gcc

SRC= ft_*

OBJ= *.o

FLAGS= -Wextra -Werror -Wall

all: $(NAME)

$(NAME): 
	$(CC) -c $(FLAGS) $(SRC) *.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
