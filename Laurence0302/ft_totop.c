/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 20:55:52 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/10 17:21:44 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_totop(char **tab, int nbtetra)
{
	char	**dest;
	int		i;
	int		j;
	int		l;
	int		c;
	int		k;

	dest = (char **)malloc(sizeof(char *) * (nbtetra * 4));
	j = 0;
	while (j < (nbtetra * 4))
		dest[j++] = (char *)malloc(sizeof(char) * 4);
	k = 0;
	j = 0;
	i = 0;
	while (k < (nbtetra * 4))
	{
		l = ft_linestotop(tab, i);
		c = ft_columnstoleft(tab, i);
		while (i < ((k + 4) - l))
		{
			j = 0;
			while (j < (4 - c))
			{
				dest[i][j] = tab[i + l][j + c];
				j++;
			}
			while (j < 4)
			{
				dest[i][j] = '.';
				j++;
			}
			i++;
		}
		while (i < (k + 4))
		{
			j = 0;
			while (j < 4)
			{
				dest[i][j] = '.';
				j++;
			}
			i++;
		}
		k = k + 4;
	}
	return (dest);
}
