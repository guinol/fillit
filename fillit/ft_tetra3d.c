/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:19:31 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_tetra3d(char ***table, char **tab, int nbtetra)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	while (k < nbtetra)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				table[k][i][j] = tab[i + 4 * k][j];
				j++;
			}
			i++;
		}
		k++;
	}
	return (table);
}
