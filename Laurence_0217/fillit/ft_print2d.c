/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:13:13 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/09 20:50:55 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	*ft_print2d(int dim_l, int dim_c, char **tab)
{
	int		j;
	int		k;

	j = 0;
	while (j < dim_l)
	{
		k = 0;
		while (k < dim_c)
		{
			ft_putchar(tab[j][k]);
			k++;
		}
		ft_putstr("\n");
		j++;
	}
	return (NULL);
}
