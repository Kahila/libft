# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akalombo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 10:57:08 by akalombo          #+#    #+#              #
#    Updated: 2019/06/18 13:58:39 by akalombo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC= gcc

SRC= ft_lstadd.c ft_putchar.c ft_strdel.c ft_strnew.c ft_lstdel.c ft_putchar_fd.c ft_strdup.c ft_strnstr.c ft_lstdelone.c ft_putendl.c ft_strequ.c ft_strrchr.c ft_atoi.c ft_lstiter.c ft_putendl_fd.c ft_striter.c ft_strsplit.c ft_bzero.c ft_lstmap.c ft_putnbr.c ft_striteri.c ft_strstr.c ft_count.c ft_lstnew.c ft_putnbr_fd.c ft_strjoin.c ft_strsub.c ft_find_len.c ft_memalloc.c ft_putstr.c ft_strlcat.c ft_strtrim.c ft_int_len.c ft_memccpy.c ft_putstr_fd.c ft_strlen.c ft_tolower.c ft_isalnum.c ft_memchr.c ft_shake_n_bake.c ft_strmap.c ft_toupper.c ft_isalpha.c ft_memcmp.c ft_strcat.c ft_strmapi.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strncat.c ft_isdigit.c ft_memdel.c ft_strclr.c ft_strncmp.c ft_isprint.c ft_memmove.c ft_strcmp.c ft_strncpy.c ft_itoa.c ft_memset.c ft_strcpy.c ft_strnequ.c

OBJ= *.o

FLAGS= -Wextra -Werror -Wall

all: $(NAME)

$(NAME): 
	$(CC) -c $(FLAGS) $(SRC) libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
