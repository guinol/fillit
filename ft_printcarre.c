/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcarre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:13:13 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/09 20:50:55 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_printcarre(char **t)
{
	int		i;
	int		j;

	i = 0;
	//while (ft_strcmp(t[i], "\0") != 0)
	while (t[i][0] != '3')
	{
		j = 0;
		//while (t[i][j] != '\0')
		while (t[i][j] != '3')
		{
			ft_putchar(t[i][j]);
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}
