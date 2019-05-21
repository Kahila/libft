# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akalombo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 10:57:08 by akalombo          #+#    #+#              #
#    Updated: 2019/05/20 15:02:32 by akalombo         ###   ########.fr        #
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
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
