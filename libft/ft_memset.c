/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:09:41 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:19:53 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	val;
	size_t			cnt;

	val = (unsigned char)c;
	str = (unsigned char*)b;
	cnt = 0;
	while (cnt < len)
		str[cnt++] = val;
	return (b);
}
