/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:25:32 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 19:55:17 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_fit_in_map(char **tetra, char **map, int l_map, int c_map, int cmax)
{
	int		i;
	int		j;
	int		c;
	int		l;
	int		diez;

	i = 0;
	l = l_map;
	diez = 0;
	while ((i < 4) && (diez < 4) && (l < cmax))
	{
		j = 0;
		c = c_map;
		while ((j < 4) && (diez < 4) && (c < cmax))
		{
			if ((map[l][c] == '.') && (tetra[i][j] != '.'))
				diez++;
			j++;
			c++;
		}
		i++;
		l++;
	}
	if (diez == 4)
		return (1);
	return (0);
}
