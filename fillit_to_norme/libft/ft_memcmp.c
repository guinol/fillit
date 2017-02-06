/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:22:39 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/26 16:22:58 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sone;
	unsigned char	*stwo;
	size_t			i;

	sone = (unsigned char*)s1;
	stwo = (unsigned char*)s2;
	i = 0;
	if (!s1 && !s2 && !n)
		return (0);
	while (n > 0)
	{
		if (sone[i] != stwo[i])
			return (sone[i] - stwo[i]);
		i++;
		n--;
	}
	return (0);
}
