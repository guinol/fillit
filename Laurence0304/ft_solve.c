/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:41:12 by agarcia-          #+#    #+#             */
/*   Updated: 2017/03/03 12:26:53 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_canplace(char **t, char **c, int p)
{
	int		i;
	int		j;
	int		n;

	n = ft_strlen(c[0]) - 3;
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

char	**ft_place(char **t, char **c, int p)
{
	int		i;
	int		j;
	int		n;

	n = ft_strlen(c[0]) - 3;
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

int		ft_verif(char **sol, int pos)
{
	int		n;

	n = ft_strlen(sol[0]) - 3;
	if (pos < n * n)
		return (1);
	return (0);
}

int		ft_solve(char ***tetris, char **solution, int a, int nt)
{
	int		pos;
	char	**tmp;

	pos = 0;
	tmp = NULL;
	if (a == nt)
	{
		ft_printcarre(solution);
		return (1);
	}
	while (ft_verif(solution, pos))
	{
		if (ft_canplace(tetris[a], solution, pos))
		{
			tmp = ft_doubledup(solution);
			solution = ft_place(tetris[a], solution, pos);
			if (ft_solve(tetris, solution, a + 1, nt))
				return (1);
			solution = ft_doubledup(tmp);
			tmp = NULL;
		}
		++pos;
	}
	return (0);
}
