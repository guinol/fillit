/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:42:11 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/08 22:17:41 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_free2d(char **tab)
{
	int i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

void	ft_free3d(char ***tab)
{
	int i;
	int j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			free(tab[i][j]);
		free(tab[i]);
	}
	free(tab);
}

void	ft_doublefree2d(char **t1, char **t2)
{
	ft_free2d(t1);
	ft_free2d(t2);
}

void	ft_doublefree3d(char ***t1, char ***t2)
{
	ft_free3d(t1);
	ft_free3d(t2);
}

int		ft_prepare(char *s, int nt, int cmin)
{
	char	**tab;
	char	***table;
	char	**tmp2d;
	char	***tmp;

	tab = ft_buff2d(s);
	table = ft_tetra3d(ft_mem3d(nt), tab, nt);
	tmp = table;
	table = ft_totop3d(table, nt);
	if (nt == 1)
	{
		ft_print3d(table);
		return (0);
	}
	tmp2d = tab;
	tab = ft_inisol(cmin);
	while (!ft_solve(table, tab, 0, nt))
	{
		++cmin;
		ft_free2d(tab);
		tab = ft_inisol(cmin);
	}
	ft_doublefree2d(tab, tmp2d);
	ft_doublefree3d(table, tmp);
	return (0);
}
