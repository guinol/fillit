/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/01 23:08:31 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*buff;
//	char	**tab;
//	int		size_buff;
//	char	***table;

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
	{
		/*ft_diezletters(buff);
		tab = ft_buff2d(buff);
		tab = ft_totop(tab, ft_nbtetra(buff));
		size_buff = ft_nbtetra(buff) * 4;
		table = ft_tetra3d(tab, ft_nbtetra(buff));
		//table = ft_tetra3D(ft_buff2d(buff), ft_nbtetra(buff));
		//ft_putchar(table[0][0][3]);i
		int cmin = ft_cmin(ft_nbtetra(buff));
		tab = ft_inisol(cmin);
		
		while(!ft_solve(table, tab, 0, ft_nbtetra(buff)))
		{
			ft_putnbr(cmin);
			++cmin;
			//tab = ft_newtab(tab, cmin);
			tab = ft_inisol(cmin);
		}*/
		ft_prepare(buff);
	}
	else
		return (ft_error());
	return (0);
}
