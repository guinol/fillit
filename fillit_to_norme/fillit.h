/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 18:16:39 by lagirard          #+#    #+#             */
/*   Updated: 2017/02/06 18:46:04 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"

int		ft_cntdiez(char *s);
int		ft_error(void);
int		ft_isformat(char *s);
int		ft_istetro(char *s);
int		ft_isvalid(char *s);
int		ft_usage(void);

#endif
