/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:33:21 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:46:46 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strnew(size_t size)
{
	char			*ret;

	if ((ret = (char *)malloc(sizeof(*ret) * (size + 1))) == NULL)
		return (NULL);
	ft_bzero(ret, size + 1);
	return (ret);
}
