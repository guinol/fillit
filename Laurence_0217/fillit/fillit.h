/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 18:16:39 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/10 18:18:03 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
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
int		ft_cmax(int nb_tetra);
char	**ft_buff2d(char *buff);
void	*ft_print2d(int dim_c, int dim_l, char **tab);
char	**ft_totop(char **tab, int nbtetra);
int		ft_linestotop(char **tab, int index_l);
int		ft_columnstoleft(char **tab, int index_l);
char	***ft_tetra3d(char **tab, int nbtetra);
void	*ft_print3d(int dim_l, int dim_c, char ***tab, int nbtetra);
char	**ft_createmap(int c);
int		ft_fit_in_map(char **tetra, char **map, int l_map, int c_map, int cmax);
char	**ft_put_tetra_in_map(char **tetra, char **map, int l_map, int c_map, int cmax);

#endif
