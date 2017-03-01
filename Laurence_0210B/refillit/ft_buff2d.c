/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buff2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:15:20 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/15 18:57:32 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_buff2d(char *buff)
{
	char	**tetra;
	int		j;
	int		k;
	int		t;
	int		size_buff;

	size_buff = ft_nbtetra(buff) * 4;
	tetra = (char **)malloc(sizeof(char *) * size_buff);
	if (tetra == NULL)
		return (NULL);
	t = 0;
	j = 0;
	while (j < size_buff)
	{
		k = 0;
		tetra[j] = (char *)malloc(sizeof(char) * 4);
		if (tetra[k] == NULL)
			return (NULL);
		while (k < 4)
		{
			while (buff[t] == '\n')
				t++;
			tetra[j][k] = buff[t];
			t++;
			k++;
		}
		j++;
	}

	printf("TESTAHAHAHAH\n");
	return (tetra);
}
