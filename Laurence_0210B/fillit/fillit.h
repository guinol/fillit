/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 18:16:39 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/15 18:46:39 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_ttr
{
	int nt;
	int cm;
	int p;
}	t_ttr;

int		ft_cntdiez(char *s);
int		ft_error(void);
int		ft_isformat(char *s);
int		ft_istetro(char *s);
int		ft_isvalid(char *s);
int		ft_usage(void);
int		ft_oknbtetra(char *s);
void	ft_diezletters(char *s);
int		ft_nbtetra(char *buff);
int		ft_cmax(int nb_tetra);
char	**ft_buff2d(char *buff);
void	*ft_print2d(int dim_c, int dim_l, char **tab);
char	**ft_totop(char **tab, int nbtetra);
int		ft_linestotop(char **tab, int index_l);
int		ft_columnstoleft(char **tab, int index_l);
char	***ft_tetra3d(char **tab, int nbtetra);
void	ft_print3d(int dim_l, int dim_c, char ***tab, int nbtetra);
void	ft_aff3d(char ***t, int n);
int	ft_carre(char ***t, char **m, int pos, int c, int nt, int actuel);
char	**ft_inicarre(int n);
void	ft_printcarre(char **m);
int	ft_isfilled(char **c, int nb);

#endif
