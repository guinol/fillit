/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 17:19:15 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <fcntl.h>
#include "./libft/ft_putstr.c"
#include "./libft/ft_strlen.c"
#include "./libft/ft_strnew.c"
#include "./libft/ft_bzero.c"
#include "./libft/ft_memset.c"
#include "./libft/ft_strdup.c"
#include "./libft/ft_strsplit.c"
#include "./libft/ft_memalloc.c"
#include "./libft/ft_strsub.c"
#include "./libft/ft_strncpy.c"
#include "./libft/ft_strcmp.c"
#include "./src/ft_cntdiez.c"
#include "./src/ft_error.c"
#include "./src/ft_usage.c"
#include "./src/ft_istetro.c"
#include "./src/ft_isformat.c"
#include "./src/ft_isvalid.c"

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
