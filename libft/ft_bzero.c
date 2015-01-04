/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:33:11 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 01:34:46 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				ft_bzero(void *s, size_t len)
{
	unsigned char	*str;
	size_t			cnt;

	str = (unsigned char*)s;
	cnt = 0;
	while (cnt < len)
		str[cnt++] = 0;
}
