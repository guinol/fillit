/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 21:49:57 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/06 23:51:03 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ltop(char **tab, int index_l)
{
	int		i;
	int		j;
	int		d;

	i = index_l;
	d = 0;
	while (i < (index_l + 4))
	{
		j = 0;
		while (j < 4 && tab[i][j] == '.')
			j++;
		if (j == 4)
			d++;
		else
			return (d);
		i++;
	}
	ft_memdel((void **)tab);
	return (d);
}
