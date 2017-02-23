/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/10 18:47:07 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*buff;
	int		cmax;
	int		nbtetra;
	char	***table;
	char	**map;
	int		k;
	int		l_map;
	int		c_map;

	if (ac != 2)
		return (ft_usage());
	if ((fd = open(av[1], O_RDONLY)) < 0)
		return (ft_error());
	buff = ft_strnew(BUFF_SIZE);
	ft_bzero(buff, BUFF_SIZE);
	if ((read(fd, buff, BUFF_SIZE)) < 0)
		return (ft_error());
	close(fd);
	if (ft_oknbtetra(buff) == 0)
		return (ft_error());
	if (ft_isvalid(buff))
	{
		ft_diezletters(buff);
		ft_putstr(buff);
		ft_putstr("\nvalide\n");
		nbtetra = ft_nbtetra(buff);
		ft_putstr("\n");
		ft_putstr("\nPrint 3D :\n");
		ft_print3d(4, 4, ft_tetra3d(ft_totop(ft_buff2d(buff), nbtetra), nbtetra), nbtetra);
		cmax = ft_cmax(ft_nbtetra(buff));
		ft_putstr("\nPrint MAP cmax : ");
		ft_putnbr(cmax);
		ft_putstr("\n");
		ft_print2d(cmax, cmax, ft_createmap(cmax));
		table = (char ***)malloc(sizeof(char **) * nbtetra);
		table = ft_tetra3d(ft_totop(ft_buff2d(buff), nbtetra), nbtetra);
		map = (char **)malloc(sizeof(char *) * cmax);
		map = ft_createmap(cmax);
		ft_putstr("\nFit 1rst Tetra in map: \n");
		k = 0;
		while (k < nbtetra)
		{
			l_map = 0;
			c_map = 0;
			while (ft_fit_in_map(table[k], map, l_map, c_map, cmax) != 1)
			{
				if (c_map < 3)
					c_map++;
				else
				{
					l_map++;
					c_map = 0;
				}
			}
			if (ft_fit_in_map(table[k], map, l_map, c_map, cmax) == 1)
				map = ft_put_tetra_in_map(table[k], map, l_map, c_map, cmax);
			k++;
		}
		ft_print2d(cmax, cmax, map);
	}
	else
		return (ft_error());
	return (0);
}