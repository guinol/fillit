# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/06 18:17:38 by lagirard          #+#    #+#              #
#    Updated: 2017/02/10 18:12:54 by lagirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FUNCTIONS = ft_cntdiez.c ft_error.c ft_isformat.c ft_istetro.c \
			ft_isvalid.c ft_usage.c ft_oknbtetra.c ft_diezletters.c \
			ft_nbtetra.c ft_cmax.c ft_print2d.c ft_buff2d.c \
			ft_totop.c ft_linestotop.c ft_columnstoleft.c \
			ft_tetra3d.c ft_print3d.c \
			main.c

FLAGS = -Wall -Wextra -Werror

LIB = libft.a

all : $(NAME)

$(NAME) :
		gcc $(FLAGS) -o $(NAME) -I. $(FUNCTIONS) $(LIB)

clean :
		rm -rf all

fclean :	clean
		rm -rf $(NAME)

re :	fclean all
