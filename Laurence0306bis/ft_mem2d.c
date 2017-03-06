/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:15:22 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/06 23:44:39 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_mem2d(int nbtetra)
{
	int		j;
	char	**dest;

	if ((dest = (char **)malloc(sizeof(char *) * (nbtetra * 4))) == NULL)
		return (NULL);
	j = 0;
	while (j < (nbtetra * 4))
	{
		if ((dest[j++] = (char *)malloc(sizeof(char) * 4)) == NULL)
			return (NULL);
	}
	return (dest);
}
