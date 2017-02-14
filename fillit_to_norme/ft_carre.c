/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 12:46:23 by agarcia-          #+#    #+#             */
/*   Updated: 2017/02/07 18:09:05 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
	
int ft_nbtetri(char *s)
{
	int r;
	int i;
	
	r = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n' && s [i + 1] == '\n')
			r++;
		i++;
	}
	return (r);
}

int ft_carremax(int n)
{
	int i;
	int r;

	r = 4;
	i = 0;
	while (n--)
	{
		i++;
		if (i == 2)
		{
			r++;
			i = 0;
		}
	}
	return (r);
}

void	ft_segment(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n' && s[i + 1] == '\n')
			s[i + 1] = '_';
		i++;
	}
}

char 	**ft_carre(int n)
{
	int i;
	int j;
	char **carre;
	
	i = 0;
	if (!(carre = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		carre[i] = ft_strnew(n + 1);
		j = 0;
		while (j < n)
		{
			carre[i][j] = ',';	
			j++;
		}
		i++;
	}
	carre[i] = "\0";
	return (carre);
}

void	ft_printcarre(char **c)
{
	int i;

	i = 0;
	while (ft_strcmp(c[i], "\0"))
	{
		ft_putendl(c[i]);
		i++;
	}
}
/*
int	ft_ppc(char ***, carre, t_tetri)
{
	char *carre;

	if (ft_alltetri(carre, nbtetri))
		ft_place(tetri, ft_map(ft_strlen(carre[0]) - 1), t_tetri);
	return(0);
}
*/
int	ft_solve(char *s)
{
	int nb_tetri;
	int carremax;
	char **carre;
	
	//ft_segment(s);
	nb_tetri = ft_nbtetri(s);
	carremax = ft_carremax(nb_tetri);
	carre = ft_carre(carremax);
	//ft_place(s, nb_tetri, map, 0)
	ft_printcarre(ft_carre(carremax));
	return (0);
}
