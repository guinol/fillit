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


int redimy(char	*s)
{
	int i;

	i = 0;
	while (s[i] != '#')
		i++;
	if (i > 14)
		return (3);
	else if (i > 9)
		return (2);
	else if (i > 4)
		return (1);
	else
		return (0);
}

int redimx(char *s)
{
	int r;

	r = 0;
	while (s[i])
	{
		t = 0;
		if (s[i] == '#')
		{
			while (s[i] != '\n')
			{
				t++;
				i++;
			}
			if 
		}
		i++;
	}
}

/*int *ft_redimtetro(char *s)
{
	int i;
	int j;
	int k;
	int t[4];

	j = 0;
	k = 1;
	t[0] = 0;
	while (s[i])
	{
		if (s[i] != '#')
		{
			j = 0;
			while (s[i] != '#')
			{
				j++;
				i++;
			}
			t[k] = j;
			k++;
		}
		i++;
	}
	return (t);
}
*//*
int	**ft_redim(char **tab)
{
	int i;
	int j;
	int t;
	t_list **lst;
	int **newtab;

	i = 0;
	while (tab[i])
	{
		newtab[i] = ft_redimtetro(tab[i]);
		i++;
	}
	return (newtab);
}*/

int		ft_sqrt(int nb)
{
	int div;
	int mod;
	int i;

	i =	 0;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		i++;
		div = nb / i;
		mod = nb % i;
		if (div == i && mod == 0)
			return (i);
	}
	return (0);
}

int mapmin(char *s)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (s[i])
	{
		if (s[i] == '_')
			n++;
	}
	return ()
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

int		ft_solve(char *s)
{
	ft_segment(s);
	ft_mapmin(s);
	ft_redim(ft_strsplit(s, '_'));
}
