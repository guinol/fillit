/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:42:00 by adeletan          #+#    #+#             */
/*   Updated: 2017/02/28 01:37:51 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**trim_it(char **tab)
{
	int i;
	int i2;
	int bol;

	i = -1;
	i2 = -1;
	bol = 0;
	while (tab[++i])
	{
		while (tab[i][++i2])
		{
			if (tab[i][i2] != '.' && tab[i][i2] != '\0')
			{
				bol = 1;
			}
			if (tab[i][i2] == '.' && bol == 1)
				tab[i][i2] = '\0';
		}
		if (bol == 0)
			tab[i] = 0;
		bol = 0;
		i2 = -1;
	}
	return (tab);
}
