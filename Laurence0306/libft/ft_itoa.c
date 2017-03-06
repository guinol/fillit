/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 09:09:13 by agarcia-          #+#    #+#             */
/*   Updated: 2017/01/12 17:05:17 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_neg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

char		*ft_itoa(int n)
{
	int		i;
	char	*s;
	int		num;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = n;
	i = 2;
	neg = 0;
	ft_itoa_neg(&n, &neg);
	while (num /= 10)
		i++;
	i += neg;
	if ((s = (char*)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	s[--i] = '\0';
	while (i--)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
