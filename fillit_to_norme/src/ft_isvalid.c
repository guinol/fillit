/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 17:04:23 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 17:19:50 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isvalid(char *s)
{
	int i;

	i = 0;
	ft_putstr(s);
	if (s[i] == '\n')
		return (0);
	while (s[i] == '\n' || s[i] == '#' || s[i] == '.')
		i++;
	if (i != ft_strlen(s))
		return (0);
	if (s[i - 1] == '\n' && s[i - 2] == '\n')
		return (0);
	if (!ft_isformat(s))
		return (0);
	if (!ft_cntdiez(s))
		return (0);
	if (!ft_istetro(s))
		return (0);
	return (1);
}
