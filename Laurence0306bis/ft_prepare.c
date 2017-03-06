/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:42:11 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:00:31 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_prepare(char *s)
{
	int		cmin;
	char	**tab;
	char	***table;
	//int		k;

	ft_diezletters(s);
	tab = ft_buff2d(s);
	table = ft_mem3d(ft_nbtetra(s));
	table = ft_tetra3d(table, tab, ft_nbtetra(s));
	table = ft_totop3d(table, ft_nbtetra(s));
	cmin = ft_cmin(ft_nbtetra(s));
	tab = ft_inisol(cmin);
	while (!ft_solve(table, tab, 0, ft_nbtetra(s)))
	{
		++cmin;
		tab = ft_inisol(cmin);
	}
	/*ft_memdel((void **)tab);
	k = 0;
	while (k < ft_nbtetra(s))
	{
		ft_memdel((void **)(table[k]));
		k++;
	}*/
	return (0);
}
