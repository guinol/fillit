/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 17:04:23 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/27 16:27:53 by agarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_isvalid(char *s)
{
	int i;

	i = 0;
	if ((int)ft_strlen(s) == 0)
		return (0);
	if (s[i] == '\n')
		return (0);
	while (s[i] == '\n' || s[i] == '#' || s[i] == '.')
		i++;
	if (i != (int)ft_strlen(s))
		return (0);
	if (s[i - 1] == '\n' && s[i - 2] == '\n')
		return (0);
	if (!ft_isformat(s))
		return (0);
	if (!ft_cntdiez(s))
		return (0);
	if (!ft_istetro(s))
		return (0);
	if (ft_oknbtetra(s) == 0)
		return (0);
	return (1);
}
