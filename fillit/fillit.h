/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 18:16:39 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/08 20:26:45 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

int		ft_cntdiez(char *s);
int		ft_error(void);
int		ft_isformat(char *s);
int		ft_istetro(char *s);
int		ft_isvalid(char *s);
int		ft_usage(void);
int		ft_oknbtetra(char *s);
void	ft_diezletters(char *s);
int		ft_nbtetra(char *buff);
char	**ft_buff2d(char *buff);
int		ft_ltop(char **tab, int index_l);
int		ft_ctop(char **tab, int index_l);
char	***ft_tetra3d(char ***table, char **tab, int nbtetra);
void	ft_printcarre(char **m);
int		ft_cmin(int nt);
char	**ft_inisol(int cmin);
int		ft_solve(char ***tetris, char **solution, int a, int nt);
char	**ft_doubledup(char **tab);
int		ft_prepare(char *s, int nt, int index2);
int		ft_isendok(char *s);
char	***ft_mem3d(int nbtetra);
char	**ft_mem2d(int nbtetra);
char	***ft_totop3d(char ***t, int nbtetra);
char	***ft_points1(int i, int j, int k, char ***dest);
char	***ft_points2(int i, int j, int k, char ***des);
void	ft_free2d(char **tab);
void	ft_print3d(char ***table);

#endif
