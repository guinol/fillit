/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linestotop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 21:49:57 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/10 12:19:44 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_linestotop(char **tab, int index_l)
{
	int		i;
	int		j;
	int		d;

	i = index_l;
	d = 0;
	while (i < (index_l + 4))
	{
		j = 0;
		while (j < 4 && tab[i][j] == '.')
			j++;
		if (j == 4)
			d++;
		else
			return (d);
		i++;
	}
	return (d);
}
