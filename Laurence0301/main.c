/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/01 22:57:35 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

t_ttr	*ft_struct(int nt)
{
	int		i;
	t_ttr	*r;

	if (!(r = (t_ttr*)malloc(sizeof(t_ttr) * nt)))
		return (NULL);
	i = 0;
	while (i < nt)
	{
		r[i].nom = i;
		r[i].pos = 0;
		r[i].nt = nt;
		i++;
	}
	return (r);
}

char	**ft_newtab(char **solution, int nb)
{
	int		i;

	i = 0;
	while (i * i < (nb * 4))
		++i;
	if (!(solution = (char**)malloc(sizeof(char*) * (i + 2))))
		return (NULL);
	nb = 0;
	while (nb < i)
	{
		solution[nb] = ft_strnew(i + 4);
		solution[nb] = ft_memset(solution[nb], '.', i);
		++nb;
	}
	solution[nb] = 0;
	return (solution);
}

void	ft_prepare(char *buff)
{
	char	**tab;
	int		size_buff;
	char	***table;
	t_ttr	*info;
	int		nbt;
	int		p;
	int		cmin;

	nbt = ft_nbtetra(buff);
	info = ft_struct(nbt);
	ft_diezletters(buff);
	tab = ft_buff2d(buff);
	tab = ft_totop(tab, nbt);
	cmin = 0;
	while (cmin * cmin < (nbt * 4))
		++cmin;
	cmin = cmin - 1;
	table = ft_tetra3d(tab, nbt);
	ft_inicmin(ft_cmin(nbt));
	tab = ft_newtab(tab, cmin);
	size_buff = 0;
	while (size_buff < nbt)
	{
		p = 0;
		while (p < 4)
		{
			table[size_buff][p] = ft_strjoin((table[size_buff][p]), "\0");
			++p;
		}
		table[size_buff][4] = NULL;
		table[size_buff] = trim_it(table[size_buff]);
		++size_buff;
	}
	while (!ft_solve(table, tab, 0, info))
	{
		++cmin;
		tab = ft_newtab(tab, cmin);
	}
}

int		main(int ac, char **av)
{
	int		fd;
	char	*buff;

	if (ac != 2)
		return (ft_usage());
	if ((fd = open(av[1], O_RDONLY)) < 0)
		return (ft_error());
	buff = ft_strnew(BUFF_SIZE);
	ft_bzero(buff, BUFF_SIZE);
	if ((read(fd, buff, BUFF_SIZE)) < 0)
		return (ft_error());
	close(fd);
	if (ft_isvalid(buff))
		ft_prepare(buff);
	else
		return (ft_error());
	return (0);
}
