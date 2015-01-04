/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 02:01:16 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:50:07 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t			count;

	count = 0;
	while (s2[count] && count < n)
	{
		s1[count] = s2[count];
		++count;
	}
	while (count < n)
		s1[count++] = 0;
	return (s1);
}
