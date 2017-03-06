/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:15:22 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:23:31 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_mem2d(int nbtetra)
{
	int		j;
	char	**dest;

	if ((dest = (char **)malloc(sizeof(char *) * (nbtetra * 5))) == NULL)
		return (NULL);
	j = 0;
	while (j < (nbtetra * 4))
	{
		if ((dest[j] = (char *)malloc(sizeof(char) * 5)) == NULL)
			return (NULL);
		j++;
	}
	return (dest);
}
