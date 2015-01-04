/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 07:26:55 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:51:16 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int				i;
	size_t			len;

	if (s2[0] == 0)
		return ((char *)s1);
	len = ft_strlen(s2);
	i = -1;
	while (s1[++i] && i + len <= n)
	{
		if (ft_strncmp((char *)(s1 + i), s2, len) == 0)
			return ((char *)(s1 + i));
	}
	return (NULL);
}
