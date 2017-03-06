/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oknbtetra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 21:00:40 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/09 16:23:47 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_oknbtetra(char *s)
{
	if (ft_nbtetra(s) > 26)
		return (0);
	return (1);
}