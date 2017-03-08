/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:45:14 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 15:24:23 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		r = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (r == NULL)
			return (NULL);
		while (i < ft_strlen(s1))
		{
			r[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < ft_strlen(s2))
		{
			r[i + ft_strlen(s1)] = s2[i];
			i++;
		}
		r[i + ft_strlen(s1)] = '\0';
		return (r);
	}
	return (0);
}
