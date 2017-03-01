/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:31:30 by agarcia-          #+#    #+#             */
/*   Updated: 2017/03/01 22:42:39 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_newtab(char **solution, int nb)
{
	int i;

	i = 0	;
	while (i * i < (nb * 4))
		++i;

	if (!(solution = (char**)malloc(sizeof(char*) * (i + 2))))
		return NULL;
	nb = 0;
	while (nb < i)
	{
		solution[nb] = ft_strnew(i + 4);
		solution[nb] = ft_memset(solution[nb], '.', i);
		++nb;
	}
	solution[nb] = 0;
	return (solution);
}

char	**ft_bord(char **c,int nt)
{
	int i;
	int j;

	i = 0;
	while (i <	nt + 3)
	{
		j = 0;
		while (j < nt + 3)
		{
			if (j >= nt || i >= nt)
				c[i][j] = '3';
			j++;
		}
		c[i][j] = '\0';
		i++;
	}
	c[i] = "\0";
	return (c);
}

int		ft_cmin(int nt)
{
	int i;

	i = 0;
	while (i * i < nt * 4)
		i++;
	return (i);
}

char **ft_inisol(int cmin)
{
	int i;
	int j;
	char **carre;

	i = 0;
	if (!(carre = (char**)malloc(sizeof(char*) * (cmin + 4))))
		return (0);
	while (i < cmin + 3)
	{
		if(!(carre[i] = (char*)malloc(sizeof(char) * (cmin + 4))))
			return (0);
		j = 0;
		while (j < cmin + 3)
		{
			carre[i][j] = ',';
			j++;
		}
		//carre[i][j] = '\0';
		i++;
	}
	//carre[i] = "\0";
	carre = ft_bord(carre, cmin);
	//ft_printcarre(carre);
	return (carre);
}
