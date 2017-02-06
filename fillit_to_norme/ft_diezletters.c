/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:11:31 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 21:53:33 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_diezletters(char *s)
{
	int		i;
	int		c;
	char	letter;

	i = -1;
	letter = 'A';
	while (s[++i])
	{
		c = 0;
		while (c < 20)
		{
			if (s[i] == '#')
				s[i] = letter;
			c++;
			i++;
		}
		letter++;
	}
}
