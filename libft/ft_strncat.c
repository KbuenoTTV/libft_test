/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 02:17:26 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:47:16 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;

	j = 0;
	i = -1;
	while (s1[++i])
		;
	while (s2[j] && j < n)
		s1[i++] = s2[j++];
	s1[i] = 0;
	return (s1);
}
