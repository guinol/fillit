/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 13:55:01 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 17:09:36 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_words(const char *ch, char c)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	if (ch[i] != c && ch[i])
		nb++;
	while (ch[i])
	{
		if (ch[i] == c && ch[i + 1] != c && ch[i + 1])
			nb++;
		i++;
	}
	return (nb);
}

static int		wrdlen(const char *s, char c)
{
	int i;

	i = 0;
	while (*s != c && *s)
	{
		++s;
		++i;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**r;
	int		cnt;
	int		nb_w;

	if (s && c)
	{
		cnt = 0;
		nb_w = ft_nb_words(s, c);
		if (!(r = (char**)ft_memalloc(sizeof(char*) * (nb_w + 1))))
			return (NULL);
		while (cnt < nb_w)
		{
			while (*s == c)
				++s;
			r[cnt] = ft_strsub(s, 0, wrdlen(s, c));
			s = s + wrdlen(s, c);
			++cnt;
		}
		return (r);
	}
	return (0);
}
