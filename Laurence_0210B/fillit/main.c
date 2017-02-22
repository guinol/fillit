/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/15 19:33:28 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*buff;
	char	**tab;
	//int		j;
	int		size_buff;
	char	***table;

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
		ft_putstr("\nNombre de Tetraminos en input : ");
		ft_putnbr(ft_nbtetra(buff));
		ft_putstr("\nCmax = ");
		ft_putnbr(ft_cmax(ft_nbtetra(buff)));
		ft_putstr("\n");


		//printf("nb tetro = %d\n", ft_nbtetra(buff));
/*
		tab = (char **)malloc(sizeof(char *) * (ft_nbtetra(buff) * 5));
		if (tab == NULL)
			return (0);
		j = 0;
		while (j < 4)
		{
			tab[j] = (char *)malloc(sizeof(char) * 5);
			if (tab == NULL)
				return (0);
			j++;
		}
*/
		tab = ft_buff2d(buff);
		ft_putstr("\n");
		tab = ft_totop(tab, ft_nbtetra(buff));
		size_buff = ft_nbtetra(buff) * 4;
		//ft_print2d(size_buff, 4, tab);
		//table = (char ***)malloc(sizeof(char**) * ft_nbtetra(buff));
		table = ft_tetra3d(tab, ft_nbtetra(buff));
		//table = ft_tetra3D(ft_buff2d(buff), ft_nbtetra(buff));
		ft_print3d(4, 4, table, ft_nbtetra(buff));
		ft_inicarre(ft_cmax(ft_nbtetra(buff)));
		//ft_carre(table, 0, ft_cmax(ft_nbtetra(buff)), 0);
		//ft_aff3d(table, ft_nbtetra(buff));
		//ft_putchar(table[0][0][3]);
		ft_carre(table, ft_inicarre(ft_cmax(ft_nbtetra(buff))), 0, ft_cmax(ft_nbtetra(buff)), ft_nbtetra(buff), 0);
	}
	else
		return (ft_error());
	return (0);
}
