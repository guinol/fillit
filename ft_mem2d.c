/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:15:22 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/07 00:29:41 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_mem2d(int nbtetra)
{
	int		j;
	char	**dest;

	dest = (char **)malloc(sizeof(char *) * (nbtetra * 5));
	j = 0;
	while (j < (nbtetra * 4))
		dest[j++] = (char *)malloc(sizeof(char) * 4);
	dest[j] = NULL;
	return (dest);
}
