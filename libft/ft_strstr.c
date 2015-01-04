/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 07:14:20 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:50:38 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strstr(const char *s1, const char *s2)
{
	int				i;
	size_t			len;

	if (s2[0] == 0)
		return ((char *)s1);
	len = ft_strlen(s2);
	i = 0;
	while (s1[i])
	{
		if (ft_strncmp((char *)(s1 + i), s2, len) == 0)
			return ((char *)(s1 + i));
		++i;
	}
	return (NULL);
}
