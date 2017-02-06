/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 21:56:05 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*buff;
	int		i;

	i = 0;
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
	}
	else
		return (ft_error());
	return (0);
}
