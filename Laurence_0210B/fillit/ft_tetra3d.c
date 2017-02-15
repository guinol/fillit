/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/15 19:31:00 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_tetra3d(char **tab, int nbtetra)
{
	//int		h;
	int		i;
	int		j;
	int		k;
	char	***table;
	int l;

	l = 0;
	table = (char ***)malloc(sizeof(char**) * (nbtetra));
	if (!table)
		return (NULL);
	k = 0;
	while (k < nbtetra)
	{
		if ((table[k] = (char **)malloc(sizeof(char*) * 4)) == NULL)
			return (NULL);
		i = 0;
			while (i < 4)
			{
				if (!(table[k][i] = (char*)malloc(sizeof(char) * 4)))
					return (NULL);
					j = 0;
					while (j < 4)
					{
						table[k][i][j] = tab[l][j];
						j++;
					}
					l++;
					i++;
			}
		k++;
	}


	/*
	while (k < nbtetra)
	{
		//h = 0;
		if ((table[k] = (char **)malloc(sizeof(char*) * 4)) == NULL)
			return (NULL);
		while (i < ( 4))
		{
			j = 0;
			if ((table[k][i] = (char *)malloc(sizeof(char) * 4)) == NULL)
				return (NULL);
			while (j < 4)
			{
				table[k][i][j] = tab[i][j];
				j++;
			}
			i++;
			//h++;
		}
		k++;
	}
	*/
	return (table);
}
