/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buff2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:15:20 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:36:21 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_buff2d(char *buff)
{
	char	**tet;
	int		j;
	int		k;
	int		l;

	if (!(tet = (char **)malloc(sizeof(char *) * (ft_nbtetra(buff) * 5))))
		return (NULL);
	l = 0;
	j = 0;
	while (j < (ft_nbtetra(buff) * 4))
	{
		if ((tet[j] = (char *)malloc(sizeof(char) * 5)) == NULL)
			return (NULL);
		k = 0;
		while (k < 4)
		{
			while (buff[l] == '\n')
				l++;
			tet[j][k] = buff[l];
			l++;
			k++;
		}
		j++;
	}
	return (tet);
}
