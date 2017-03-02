/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:05:32 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/02 16:37:06 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_solve(char ***tetris, char **solution, int a)
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
		if (ft_placeable_it(tetris[a], solution, x, y))
		{
			tmp = ft_doubledup(solution);
			solution = ft_place_it(tetris[a], solution, x, y);
			if (ft_solve(tetris, solution, a + 1))
				return (1);
			solution = ft_doubledup(tmp);
			tmp = NULL;
		}
		ft_newpos(solution, &x, &y);
	}
	return (0);
}
