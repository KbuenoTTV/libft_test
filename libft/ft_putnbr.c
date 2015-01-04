/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:37:22 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:16:54 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = (unsigned int)-n;
	}
	else
		nb = n;
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}
