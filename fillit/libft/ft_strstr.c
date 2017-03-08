/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <agarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 17:21:18 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 15:56:00 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (ft_strlen(big) < ft_strlen(little))
		return (NULL);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			if (j + 1 == ft_strlen(little))
				return ((char *)big + i - j);
			j++;
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
