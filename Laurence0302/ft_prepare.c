/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:16:26 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/02 18:03:48 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_prepare(char *buff)
{
	char	**tab;
	char	***table;
	int		nbt;
	int		cmin;
	int		i;
	int		p;
	int		q;

	nbt = ft_nbtetra(buff);
	ft_diezletters(buff);
	tab = ft_buff2d(buff);
	tab = ft_totop(tab, nbt);
	table = ft_tetra3d(tab, nbt);
	//--------------- A CONSERVER  debut ---------------
	/*i = 0;
	while (i < nbt)
	{
		p = 0;
		while (p < 4)
		{
			table[i][p] = ft_strjoin((table[i][p]), "\0");
			++p;
		}
		table[i][4] = NULL;
		table[i] = ft_trim_it(table[i]);
		++i;
	}*/
	//------------- A CONSERVER fin --------------------
	i = 0;
	while (i < nbt)
	{
		p = 0;
		while (p < 4)
		{
			table[i][p] = ft_strjoin((table[i][p]), "\0");
			++p;
		}
		table[i][4] = NULL;
		table[i] = ft_trim_it(table[i]);
		++i;
	}
	// ____________________ debut TEST ____________________
	i = 0;
	while (i < nbt)
	{
		ft_putstr("Tetraminos numero : ");
		ft_putnbr(i + 1);
		ft_putendl("");
		p = 0;
		while (table[i][p])
		{
			q = 0;
			while (table[i][p][q])
			{
				ft_putchar(table[i][p][q]);
				q++;
			}
			ft_putendl("");
			p++;
		}
		ft_putendl("");
		i++;
	}
	// ____________________ fin TEST _______________________
	ft_putendl("\n1. Test ft_prepare");
	cmin = ft_cmin(nbt) - 1;// A VERIFIER !!!!!!
	tab = ft_newtab(tab, cmin);
	while (!ft_solve(table, tab, 0))
	{
		++cmin;
		tab = ft_newtab(tab, cmin);
		ft_putstr("\n2. Test ft_solve numero : ");
		ft_putnbr(cmin);
		ft_putendl("");
	}
}
