/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 18:16:39 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/02 16:53:41 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

int				ft_usage(void);//1
int				ft_error(void);//2
int				ft_isvalid(char *s);//3

int				ft_isformat(char *s);//4
int				ft_cntdiez(char *s);//5
int				ft_istetro(char *s);//6
int				ft_oknbtetra(char *s);//7

void			ft_prepare(char *buff);//8

int				ft_nbtetra(char *buff);//9
void			ft_diezletters(char *s);//11
char			**ft_buff2d(char *buff);//12

char			**ft_totop(char **tab, int nbtetra);//13
int				ft_linestotop(char **tab, int index_l);//14
int				ft_columnstoleft(char **tab, int index_l);//15

char			***ft_tetra3d(char **tab, int nbtetra);//16

int				ft_cmin(int nt);//17
char			**ft_newtab(char **solution, int nb);//18
char			**ft_trim_it(char ** tab);//19
int				ft_solve(char ***tetris, char **solution, int a);//20

void			ft_printcarre(char **t);//21
int				ft_check(char **c, int x, int y);//22

char			**ft_place_it(char **src, char **dst, int i4, int i5);//23
int				ft_placeable_it(char **src, char **dst, int i4, int i5);//24
char			**ft_doubledup(char **tab);//25
void			ft_newpos(char **solution, int *x, int *y);//26

#endif
