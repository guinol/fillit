/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:01:16 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 15:08:01 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ns;
	int		i;

	if (s)
	{
		ns = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (ns == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			ns[i] = f(s[i]);
			i++;
		}
		ns[i] = '\0';
		return (ns);
	}
	return (0);
}
