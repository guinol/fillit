/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 18:16:39 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/01 22:53:37 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

typedef struct	s_ttr
{
	int			nom;
	int			pos;
	int			nt;
}				t_ttr;

char			**ft_doubledup(char **tab);
int				ft_cntdiez(char *s);
int				ft_error(void);
int				ft_isformat(char *s);
int				ft_istetro(char *s);
int				ft_isvalid(char *s);
int				ft_usage(void);
int				ft_oknbtetra(char *s);
void			ft_diezletters(char *s);
int				ft_nbtetra(char *buff);
char			**ft_buff2d(char *buff);
void			*ft_print2d(int dim_c, int dim_l, char **tab);
char			**ft_totop(char **tab, int nbtetra);
int				ft_linestotop(char **tab, int index_l);
int				ft_columnstoleft(char **tab, int index_l);
char			***ft_tetra3d(char **tab, int nbtetra);
void			ft_print3d(int dim_l, int dim_c, char ***tab, int nbtetra);
void			ft_aff3d(char ***t, int n);
int				ft_carre(char ***t, char **c, int a, t_ttr *info);
char			**ft_inicarre(int n);
void			ft_printcarre(char **m);
int				ft_isfilled(char **c, int nb);
t_ttr			*ft_struct(int nt);
char			**ft_inicmin(int cmin);
int				ft_cmin(int nt);
int				ft_solve(char ***tetris, char **solution, int a, t_ttr *info);
int				placeable_it(char **src, char **dst, int i4, int i5);
char			**place_it(char **src, char **dst, int i4, int i5);

#endif
