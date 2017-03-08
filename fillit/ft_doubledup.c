/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doubledup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:37:44 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/06 23:45:05 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**ft_doubledup(char **tab)
{
	int		i;
	int		x;
	char	**tmp;

	if (tab == NULL)
		return (NULL);
	x = ft_strlen(tab[0]);
	if ((tmp = (char **)malloc(sizeof(char *) * (x + 4))) == NULL)
		return (NULL);
	tmp[x] = NULL;
	i = -1;
	while (++i < x)
		tmp[i] = ft_strdup(tab[i]);
	return (tmp);
}
