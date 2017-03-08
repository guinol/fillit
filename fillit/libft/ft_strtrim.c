/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:47:48 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 15:36:35 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*r;
	int		i;
	int		deb;
	int		fin;
	int		l;

	if (s)
	{
		i = -1;
		deb = 0;
		fin = 0;
		l = ft_strlen((char *)s);
		while ((s[++i] == ' ' || s[i] == '\t' || s[i] == '\n') && i < l + 1)
			deb++;
		while ((s[--l] == ' ' || s[l] == '\t' || s[l] == '\n') && l > deb)
			fin++;
		r = (char*)malloc(sizeof(char) * (ft_strlen(s) - deb - fin));
		if (r == NULL)
			return (NULL);
		r = ft_strsub(s, deb, ft_strlen(s) - deb - fin);
		return (r);
	}
	return (0);
}
