/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/25 02:56:46 by y0ja              #+#    #+#             */
/*   Updated: 2015/01/04 13:41:31 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		nb = ABS(nb);
		i++;
	}
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}
