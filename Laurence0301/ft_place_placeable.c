/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_placeable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 04:18:07 by adeletan          #+#    #+#             */
/*   Updated: 2017/02/28 01:28:58 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		placeable_it(char **src, char **dst, int i4, int i5)
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
			if (!dst[i4] || !dst[i4][i5])
				return (0);
			else if (dst[i4][i5] == '.' && src[i][i2] != '.')
				(++i2 && ++i5);
			else if (src[i][i2] == '.' && i == 0)
				(i3-- && i2++);
			else if (src[i][i2] == '.')
				(++i2 && ++i5);
			else if (src[i][i2] == '.' && src[i + 1][i2] != '.')
				++i2;
			else if (src[i][i2] != '.' && dst[i4][i5] != '.')
				return (0);
		(++i4 && (i5 = i3));
	}
	return (1);
}

char	**place_it(char **src, char **dst, int i4, int i5)
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
