/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:42:11 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:15:01 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_prepare(char *s)
{
	int		cmin;
	char	**tab;
	char	***table;

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
	return (0);
}
