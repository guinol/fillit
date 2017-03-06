/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totop3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/06 20:19:56 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	***ft_points1(int i, int j, int k, char ***dest)
{
	while (j < 4)
	{
		dest[k][i][j] = '.';
		j++;
	}
	return (dest);
}
