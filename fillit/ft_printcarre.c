/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcarre.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:13:13 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/08 21:51:22 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_index(char ***table, int i, int j, int n)
{
	int		count;

	count = 0;
	while (n > 1)
	{
		j = 0;
		while (j < 4 && table[0][n][j] == '.')
		{
			j++;
			count++;
		}
		i = 0;
		while (i < 4 && table[0][i][n] == '.')
		{
			i++;
			count++;
		}
		n--;
	}
	if (count == 16)
		return (2);
	else if (count > 8 && count < 16)
		return (3);
	else
		return (4);
}

void	ft_print3d(char ***table)
{
	int		i;
	int		j;
	int		index;

	index = ft_index(table, 0, 0, 3);
	i = 0;
	while (i < index)
	{
		j = 0;
		while (j < index)
		{
			ft_putchar(table[0][i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_printcarre(char **t)
{
	int i;
	int j;

	i = 0;
	while (t[i][0] != '3')
	{
		j = 0;
		while (t[i][j] != '3')
		{
			ft_putchar(t[i][j]);
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}
