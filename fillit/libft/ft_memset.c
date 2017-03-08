/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:23:16 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/26 11:46:39 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *r, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)r;
	while (len > 0)
	{
		tmp[len - 1] = c;
		len--;
	}
	return (r);
}
