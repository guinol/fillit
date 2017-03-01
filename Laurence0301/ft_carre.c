/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_carre.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 21:38:37 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/01 22:32:14 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_bord(char **c, int nt)
{
	int		i;
	int		j;

	i = 0;
	while (i < nt + 3)
	{
		j = 0;
		while (j < nt + 3)
		{
			if (j >= nt || i >= nt)
				c[i][j] = '0';
			j++;
		}
		i++;
	}
	return (c);
}

int		ft_cmin(int nt)
{
	int		i;

	i = 0;
	while (i * i < nt * 4)
		i++;
	return (i);
}

char	**ft_inicmin(int cmin)
{
	int		i;
	int		j;
	char	**carre;

	i = 0;
	if (!(carre = (char**)malloc(sizeof(char*) * (cmin + 4))))
		return (0);
	while (i < cmin + 3)
	{
		if (!(carre[i] = (char*)malloc(sizeof(char) * (cmin + 4))))
			return (0);
		j = 0;
		while (j < cmin + 3)
		{
			carre[i][j] = ',';
			j++;
		}
		carre[i][j] = '\0';
		i++;
	}
	carre[i] = "\0";
	carre = ft_bord(carre, cmin);
	return (carre);
}

char	**ft_inicarre(int nt)
{
	int		i;
	int		j;
	char	**carre;

	i = 0;
	if (!(carre = (char**)malloc(sizeof(char*) * (nt + 4))))
		return (0);
	while (i < nt + 3)
	{
		if (!(carre[i] = (char*)malloc(sizeof(char) * (nt + 4))))
			return (0);
		j = 0;
		while (j < nt + 3)
		{
			carre[i][j] = ',';
			j++;
		}
		carre[i][j] = '\0';
		i++;
	}
	carre[i] = "\0";
	return (carre);
}

int		ft_isfilled(char **c, int nb_block)
{
	int		i;
	int		j;
	int		n;

	n = 0;
	i = 0;
	while (ft_strcmp(c[i], "\0") != 0)
	{
		j = 0;
		while (c[i][j] != '\0')
		{
			if (ft_isalpha(c[i][j]))
				n++;
			j++;
		}
		i++;
	}
	if (n != nb_block)
		return (0);
	return (1);
}

int		ft_canplace(char **t, char **c, int cm, int p)
{
	int		i;
	int		j;

	i = 0;
	ft_putstr("CANPLACE");
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_isalpha(t[i][j]) && c[p / cm + i][p % cm + j] != ',')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**ft_place(char **t, char **c, int cmax, int p)
{
	int		i;
	int		j;

	i = 0;
	ft_putstr("Place\n");
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_isalpha(t[i][j]))
				c[p / cmax + i][p % cmax + j] = t[i][j];
			j++;
		}
		i++;
	}
	return (c);
}

int		ft_carre(char ***t, char **c, int a, t_ttr *info)
{
	char	**tmp;
	int		cmax;

	cmax = ft_strlen(c[0]) - 3;
	ft_putstr("DEBUT");
	while (a < info[0].nt && info[a].pos < cmax * cmax)
	{
		if (ft_canplace(t[a], c, cmax, info[a].pos))
		{
			c = ft_place(t[a], c, cmax, info[a].pos);
			a++;
		}
		else
			info[a].pos = info[a].pos + 1;
	}
	ft_putstr("PLACE\n");
	if (ft_isfilled(c, info[0].nt * 4))
	{
		ft_putstr("PLEIN\n");
		tmp = c;
		ft_printcarre(tmp);
		ft_carre(t, ft_inicarre(cmax - 1), 0, ft_struct(info[0].nt));
	}
	return (0);
}

int		ft_check(char **c, int x, int y)
{
	int		n;

	n = ft_strlen(c[0]);
	if (y < n && x < n)
		return (1);
	return (0);
}

void	ft_newpos(char **solution, int *x, int *y)
{
	int		z;

	z = ft_strlen(solution[0]);
	z--;
	if (*y < z)
	{
		++(*y);
	}
	else
	{
		++(*x);
		*y = 0;
	}
}

int		ft_solve(char ***tetris, char **solution, int a, t_ttr *info)
{
	int		x;
	int		y;
	char	**tmp;

	x = 0;
	y = 0;
	tmp = NULL;
	if (!tetris[a])
	{
		ft_printcarre(solution);
		return (1);
	}
	while (ft_check(solution, x, y))
	{
		if (placeable_it(tetris[a], solution, x, y))
		{
			tmp = ft_doubledup(solution);
			solution = place_it(tetris[a], solution, x, y);
			if (ft_solve(tetris, solution, a + 1, info))
				return (1);
			solution = ft_doubledup(tmp);
			tmp = NULL;
		}
		ft_newpos(solution, &x, &y);
	}
	return (0);
}
