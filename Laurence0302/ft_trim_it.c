/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:42:00 by adeletan          #+#    #+#             */
/*   Updated: 2017/03/02 17:01:54 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_trim_it(char **tab)
{
	int i;
	int j;
	int bol;

	i = -1;
	j = -1;
	bol = 0;
	while (tab[++i])
	{
		while (tab[i][++j])
		{
			if (tab[i][j] != '.' && tab[i][j] != '\0')
			{
				bol = 1;
			}
			if (tab[i][j] == '.' && bol == 1)
				tab[i][j] = '\0';
		}
		if (bol == 0)
			tab[i] = 0;
		bol = 0;
		j = -1;
	}
	return (tab);
}
