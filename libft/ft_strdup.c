/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 00:44:29 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:44:05 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strdup(const char *s1)
{
	char			*ret;
	int				len;
	int				i;

	len = ft_strlen(s1);
	i = -1;
	if ((ret = (char *)malloc(sizeof(*ret) * (len + 1))) == NULL)
		return (NULL);
	while (++i < len)
		ret[i] = s1[i];
	ret[i] = 0;
	return (ret);
}
