/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:15:20 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/15 16:42:32 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_tetra2d(char *buff)
{
	char	**tetra;
	int		j;
	int		k;
	int		t;

	tetra = (char **)malloc(sizeof(char *) * 5);
	if (tetra == NULL)
		return (NULL);
	t = 0;
	j = 0;
	while (j < 4)
	{
		k = 0;
		tetra[j] = (char *)malloc(sizeof(char) * 5);
		if (tetra[k] == NULL)
			return (NULL);
		while (k < 4)
		{
			if (buff[t] == '\n')
				t++;
			tetra[j][k] = buff[t];
			t++;
			k++;
		}
		tetra[j][k] = 0;
		j++;
	}
	tetra[j] = 0;
	return (tetra);
}
