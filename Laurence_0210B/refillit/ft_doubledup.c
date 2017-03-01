/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doubledup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-sous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:17:22 by ede-sous          #+#    #+#             */
/*   Updated: 2017/03/01 23:01:38 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
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
		ft_printcarre(tab);
		while (++i < x - 1)
		{
			ft_putendl("oo");
			ft_putnbr(x);
			ft_putendl(tab[i]);
			tmp[i] = ft_strdup(tab[i]);
		}
		return (tmp);

	/*x = ft_strlen(tab[0]);
	  if ((tmp = (char**)malloc(sizeof(char*) * (x + 1))) == NULL)
	  return (NULL);
	  tmp[x] = NULL;
	  i = -1;
	  while (++i < x - 1)
	  tmp[i] = ft_strdup(tab[i]);
	  ft_printcarre(tab);
	  ft_putendl("uuuuuuuuuuuuuu");
	//ft_printcarre(tmp);
	return (tmp);*/
}
