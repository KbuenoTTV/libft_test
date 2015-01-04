/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:11:09 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:04:17 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void					*ft_memalloc(size_t size)
{
	void				*ret;

	if ((ret = malloc(size)) == NULL)
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
