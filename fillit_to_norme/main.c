/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 18:39:29 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	*buff;
	char	**s;
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
	if (ft_isvalid(buff))
		ft_putstr("\nvalide\n");
	else
		ft_putstr("\nNON VALIDE\n");
	return (0);
}
