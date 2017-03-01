/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:04:21 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/01 21:46:13 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_print3d(int dim_l, int dim_c, char ***tab, int nbtetra)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < nbtetra)
	{
		j = 0;
		while (j < dim_l)
		{
			k = 0;
			while (k < dim_c)
			{
				ft_putchar(tab[i][j][k]);
				k++;
			}
			ft_putstr("\n");
			j++;
		}
		i++;
	}
}
