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
	char	**tab;
	int		j;
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
		tab = (char **)malloc(sizeof(char *) * (ft_nbtetra(buff) * 4));
		if (tab == NULL)
			return (0);
		j = 0;
		while (j < 4)
		{
			tab[j] = (char *)malloc(sizeof(char) * 4);
			if (tab == NULL)
				return (0);
			j++;
		}
		tab = ft_buff2d(buff);
		ft_putstr("\n");
		tab = ft_totop(tab, ft_nbtetra(buff));
		size_buff = ft_nbtetra(buff) * 4;
		//ft_print2d(size_buff, 4, tab);
		table = (char ***)malloc(sizeof(char**) * ft_nbtetra(buff));
		table = ft_tetra3d(tab, ft_nbtetra(buff));
		ft_print3d(size_buff, 4, table, ft_nbtetra(buff));
	}
	else
		return (ft_error());
	return (0);
}
