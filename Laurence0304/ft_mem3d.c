/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:15:22 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/03 18:25:57 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_mem3d(int nbtetra)
{
	int		i;
	int		k;
	char	***table;

	if ((table = (char ***)malloc(sizeof(char**) * (nbtetra))) == NULL)
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
			i++;
		}
		k++;
	}
	return (table);
}
