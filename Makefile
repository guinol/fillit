# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/06 18:17:38 by lagirard          #+#    #+#              #
#    Updated: 2017/03/08 18:08:10 by agarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FUNCTIONS = ft_cntdiez.c ft_error.c ft_isformat.c ft_istetro.c \
			ft_isvalid.c ft_usage.c ft_oknbtetra.c ft_diezletters.c \
			ft_nbtetra.c ft_buff2d.c \
			ft_ltop.c ft_ctop.c \
			ft_tetra3d.c ft_prepare.c \
			ft_printcarre.c ft_cmin.c ft_doubledup.c ft_solve.c main.c\
			ft_isendok.c\
			ft_mem3d.c ft_mem2d.c\
			ft_totop3d.c\
			ft_points1.c ft_points2.c\

INCLUDE = fillit.h

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

all : $(NAME)

$(NAME) :
		@make -C ./libft/
		gcc $(FLAGS) -o $(NAME) -I $(INCLUDE) $(FUNCTIONS) $(LIB)

clean :
		@make -C ./libft/ clean
		rm -rf all

fclean :	clean
		@make -C ./libft/ fclean
		rm -rf $(NAME)

re :	fclean all
