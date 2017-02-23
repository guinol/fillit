/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/10 18:45:50 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_tetra3d(char **tab, int nbtetra)
{
	int		h;
	int		i;
	int		j;
	int		k;
	char	***table;

	if ((table = (char ***)malloc(sizeof(char **) * nbtetra)) == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (k < nbtetra)
	{
		if ((table[k] = (char **)malloc(sizeof(char*) * 4)) == NULL)
			return (NULL);
		h = 0;
		while (h < 4)
		{
			j = 0;
			if ((table[k][h] = (char *)malloc(sizeof(char) * 4)) == NULL)
				return (NULL);
			while (j < 4)
			{
				table[k][h][j] = tab[i][j];
				j++;
			}
			i++;
			h++;
		}
		k++;
	}
	return (table);
}
