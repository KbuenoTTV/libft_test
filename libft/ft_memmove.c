/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:37:53 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:19:24 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			len;
	size_t			len2;

	if (n == 0)
		return (s1);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	len = n - 1;
	len2 = 0;
	while (s1 > s2 && len > 0)
	{
		str1[len] = str2[len];
		--len;
		str1[len] = str2[len];
	}
	while (s2 >= s1 && len2 < n)
	{
		str1[len2] = str2[len2];
		++len2;
	}
	return (s1);
}
