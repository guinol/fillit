/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buff2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:15:20 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/03 17:53:30 by lagirard         ###   ########.fr       */
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

	if ((tet = (char **)malloc(sizeof(char *) * ft_nbtetra(buff) * 4)) == NULL)
		return (NULL);
	l = 0;
	j = 0;
	while (j < (ft_nbtetra(buff) * 4))
	{
		if ((tet[j] = (char *)malloc(sizeof(char) * 4)) == NULL)
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
