/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totop3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/03 18:20:10 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_totop3d(char ***table, int nbtetra)
{
	int		i;
	int		j;
	int		k;
	char	***dest;

	k = 0;
	dest = ft_mem3d(nbtetra);
	while (k < nbtetra)
	{
		i = 0;
		while (i < 4 - ft_linestotop(table[k], 0))
		{
			j = 0;
			while (j < (4 - ft_columnstoleft(table[k], 0)))
			{
				dest[k][i][j] = table[k][i + ft_linestotop(table[k], 0)][j + ft_columnstoleft(table[k], 0)];
				j++;
			}
			while (j < 4)
			{
				dest[k][i][j] = '.';
				j++;
			}
			i++;
		}
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				dest[k][i][j] = '.';
				j++;
			}
			i++;
		}
		k++;
	}
	return (dest);
}
