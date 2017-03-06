/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:04:02 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/06 23:52:28 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ctop(char **tab, int index_l)
{
	int		i;
	int		j;
	int		d;

	d = 0;
	j = 0;
	while (j < 4)
	{
		i = index_l;
		while (i < (index_l + 4) && tab[i][j] == '.')
			i++;
		if (i == index_l + 4)
			d++;
		else
			return (d);
		j++;
	}
	ft_memdel((void **)tab);
	return (d);
}
