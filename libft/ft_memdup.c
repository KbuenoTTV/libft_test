/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 12:53:19 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:05:57 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				*ft_memdup(void const *s, size_t len)
{
	void			*ret;

	if (s == NULL || ((ret = malloc(len))) == NULL)
		return (NULL);
	ft_memcpy(ret, s, len);
	return (ret);
}
