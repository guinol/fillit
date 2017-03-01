/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:41:12 by agarcia-          #+#    #+#             */
/*   Updated: 2017/03/01 21:53:19 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_canplace(char **t, char **c, int p)
{
	int i;
	int j;
	int n;

	n = ft_strlen(c[0]);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_isalpha(t[i][j]) && c[p / n + i][p % n + j] != ',')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char **ft_place(char **t, char **c, int p)
{
	int i;
	int j;
	int n;

	n = ft_strlen(c[0]);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_isalpha(t[i][j]))
				c[p / n + i][p % n + j] = t[i][j];
			j++;
		}
		i++;
	}
	return (c);
}

int	ft_verif(char **sol, int pos)
{
	int n;

	n = ft_strlen(sol[0]) - 11;
	if (pos <= n * n)
		return (1);
	return (0);
}

int	ft_solve(char ***tetris, char **solution, int a)
{
	int pos;
	char **tmp;

	pos = 0;
	tmp = NULL;
	if (!tetris[a])
	{
		ft_printcarre(solution);
		return (1);
	}
	//while (ft_check(solution, x, y))
	while (ft_verif(solution, pos))
	{
		if (ft_canplace(tetris[a], solution, pos))
		{
			ft_putendl("wwwwwwwwwwwwwwwwwwwwwwwwwww");
			tmp = ft_doubledup(solution);
			ft_putendl("lllllllllllllllllllllllllllllllll");
			solution = ft_place(tetris[a], solution, pos);
			if (ft_solve(tetris, solution, a + 1))
				return (1);
			solution = ft_doubledup(tmp);
			tmp = NULL;
		}
		++pos;
		//ft_newpos(solution, &x, &y);
	}
	return (0);
}
