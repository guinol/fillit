/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doubledup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-sous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:17:22 by ede-sous          #+#    #+#             */
/*   Updated: 2017/03/01 22:53:53 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_doubledup(char **tab)
{
	int			i;
	int			x;
	char		**tmp;

	x = 0;
	if (tab == NULL)
		return (NULL);
	while (tab[x])
		++x;
	if ((tmp = (char**)malloc(sizeof(char*) * (x + 1))) == NULL)
		return (NULL);
	tmp[x] = NULL;
	i = -1;
	while (++i < x)
		tmp[i] = ft_strdup(tab[i]);
	return (tmp);
}
