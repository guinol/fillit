/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <lagirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:10 by lagirard          #+#    #+#             */
/*   Updated: 2017/03/02 18:31:30 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*char	***ft_tetra3d(char **tab, int nbtetra)
{
	int		i;
	int		j;
	int		k;
	char	***table;
	int		l;

	l = 0;
	table = (char ***)malloc(sizeof(char **) * (nbtetra + 4));
	if (!table)
		return (NULL);
	k = 0;
	while (k < nbtetra)
	{
		if ((table[k] = (char **)malloc(sizeof(char *) * 6)) == NULL)
			return (NULL);
		i = 0;
		while (i < 4)
		{
			if (!(table[k][i] = (char *)malloc(sizeof(char) * 8)))
				return (NULL);
			j = 0;
			while (j < 4)
			{
				table[k][i][j] = tab[l][j];
				j++;
			}
			table[k][i][j] = '\0';
			l++;
			i++;
		}
		table[k][i] = 0;
		k++;
	}
	table[k] = 0;
	return (table);
}*/

char	***ft_tetra3d(char **tab, int nbtetra)
{
    int		h;
    int		i;
    int		j;
    int		k;
    char	***table;
    
    if ((table = (char ***)malloc(sizeof(char **) * (nbtetra + 1))) == NULL)
        return (NULL);
    k = 0;
    i = 0;
    while (k < nbtetra)
    {
        if ((table[k] = (char **)malloc(sizeof(char*) * 5)) == NULL)
            return (NULL);
        h = 0;
        while (h < 4)
        {
            j = 0;
            if ((table[k][h] = (char *)malloc(sizeof(char) * 5)) == NULL)
                return (NULL);
            while (j < 4)
            {
                table[k][h][j] = tab[i][j];
                j++;
            }
			table[k][h][j] = '\0';
            i++;
            h++;
        }
		table[k][h] = "\0";
        k++;
    }
    return (table);
}
