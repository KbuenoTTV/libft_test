/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 02:29:07 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:45:25 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			ret;
	size_t			temp;
	size_t			temp2;

	temp = ft_strlen(dst);
	temp2 = 0;
	if (ft_strlen(dst) > size)
		ret = ft_strlen(src) + size;
	else
		ret = ft_strlen(dst) + ft_strlen(src);
	while (src[temp2] && temp + 1 < size)
	{
		dst[temp] = src[temp2];
		temp++;
		temp2++;
	}
	dst[temp] = 0;
	return (ret);
}
