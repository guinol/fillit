/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:15:47 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/02 14:16:02 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_newtab(char **solution, int nb)
{
	int		i;

	i = 0;
	while (i * i < (nb * 4))
		++i;
	if (!(solution = (char**)malloc(sizeof(char*) * (i + 2))))
		return (NULL);
	nb = 0;
	while (nb < i)
	{
		solution[nb] = ft_strnew(i + 4);
		solution[nb] = ft_memset(solution[nb], '.', i);
		++nb;
	}
	solution[nb] = 0;
	return (solution);
}
