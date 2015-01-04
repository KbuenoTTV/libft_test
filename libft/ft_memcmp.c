/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:11:10 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:05:07 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			len;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	len = 0;
	while (len < n)
	{
		if (str1[len] != str2[len])
			return (str1[len] - str2[len]);
		++len;
	}
	return (0);
}
