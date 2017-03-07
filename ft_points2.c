/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_points2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/06 20:23:24 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_points2(int i, int j, int k, char ***des)
{
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			des[k][i][j] = '.';
			j++;
		}
		i++;
	}
	return (des);
}
