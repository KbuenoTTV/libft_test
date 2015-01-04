/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:56:04 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:05:28 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void				*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			len;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	len = 0;
	while (len < n)
	{
		str1[len] = str2[len];
		++len;
	}
	return (s1);
}
