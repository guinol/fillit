/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:15:22 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:18:33 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_mem3d(int nbtetra)
{
	int		i;
	int		k;
	char	***table;

	if ((table = (char ***)malloc(sizeof(char**) * (nbtetra + 1))) == NULL)
		return (NULL);
	k = 0;
	while (k < nbtetra)
	{
		if ((table[k] = (char **)malloc(sizeof(char*) * 5)) == NULL)
			return (NULL);
		i = 0;
		while (i < 4)
		{
			if (!(table[k][i] = (char*)malloc(sizeof(char) * 5)))
				return (NULL);
			i++;
		}
		table[k][i] = NULL;
		k++;
	}
	table[k] = NULL;
	return (table);
}
