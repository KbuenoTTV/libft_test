/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:10:34 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:04:41 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	val;
	size_t			len;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	val = (unsigned char)c;
	len = 0;
	while (len < n)
	{
		str1[len] = str2[len];
		if (str2[len] == val)
			return (str1 + len + 1);
		++len;
	}
	return (NULL);
}
