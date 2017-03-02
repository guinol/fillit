/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_it.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:40:59 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/02 14:44:45 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_place_it(char **src, char **dst, int i4, int i5)
{
	int i;
	int i2;
	int i3;

	i3 = i5;
	i = -1;
	while (src[++i])
	{
		i2 = 0;
		while (src[i][i2])
			if (dst[i4][i5] == '.' && src[i][i2] != '.')
			{
				dst[i4][i5] = src[i][i2];
				(++i2 && ++i5);
			}
			else if (src[i][i2] == '.' && i == 0)
				(i3-- && i2++);
			else if (src[i][i2] == '.')
				(++i2 && ++i5);
			else if (src[i][i2] == '.' && src[i + 1][i2] != '.')
				++i2;
		i5 = i3;
		++i4;
	}
	return (dst);
}
