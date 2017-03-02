# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/06 18:17:38 by lagirard          #+#    #+#              #
#    Updated: 2017/03/02 16:52:51 by lagirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FUNCTIONS = 	main.c\
				ft_usage.c ft_error.c ft_isvalid.c\
				ft_isformat.c ft_cntdiez.c ft_istetro.c ft_oknbtetra.c\
				ft_prepare.c\
				ft_nbtetra.c ft_diezletters.c ft_buff2d.c\
				ft_totop.c ft_linestotop.c ft_columnstoleft.c \
				ft_tetra3d.c\
				ft_cmin.c\
				ft_newtab.c ft_trim_it.c ft_solve.c\
				ft_printcarre.c ft_check.c\
				ft_place_it.c ft_placeable_it.c ft_doubledup.c ft_newpos.c\

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
