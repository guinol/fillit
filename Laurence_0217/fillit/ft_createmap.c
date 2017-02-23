/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:25:32 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 19:55:17 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_createmap(int c)
{
	char	**map;
	int		i;
	int		j;

	i = 0;
	map = (char **)malloc(sizeof(char*) * c);
	if (map == NULL)
		return (NULL);
	while (i < c)
	{
		j = 0;
		map[i] = (char *)malloc(sizeof(char) * c);
		if (map[i] == NULL)
			return (NULL);
		while (j < c)
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}
