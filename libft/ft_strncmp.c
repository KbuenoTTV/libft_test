/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 06:14:27 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:47:37 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = -1;
	while (s1[++i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (i < n && s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
