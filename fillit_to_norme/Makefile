# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/06 18:17:38 by lagirard          #+#    #+#              #
#    Updated: 2017/02/06 19:20:10 by lagirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FUNCTIONS = ft_cntdiez.c ft_error.c ft_isformat.c ft_istetro.c \
			ft_isvalid.c ft_usage.c main.c

INCLUDE = fillit.h

FLAGS = -Wall -Wextra -Werror

LIB = libft.a

all : $(NAME)

$(NAME) :
		gcc $(FLAGS) -o $(NAME) -I $(INCLUDE) $(FUNCTIONS) $(LIB)

clean :
		rm -rf all

fclean :	clean
		rm -rf $(NAME)

re :	fclean all
