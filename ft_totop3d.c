/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totop3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 20:25:51 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:19:43 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_totop3d(char ***t, int nbtetra)
{
	int		i;
	int		j;
	int		k;
	char	***des;

	k = 0;
	des = ft_mem3d(nbtetra);
	while (k < nbtetra)
	{
		i = 0;
		while (i < 4 - ft_ltop(t[k], 0))
		{
			j = 0;
			while (j < (4 - ft_ctop(t[k], 0)))
			{
				des[k][i][j] = t[k][i + ft_ltop(t[k], 0)][j + ft_ctop(t[k], 0)];
				j++;
			}
			des = ft_points1(i, j, k, des);
			i++;
			des = ft_points2(i, j, k, des);
		}
		k++;
	}
	return (des);
}
