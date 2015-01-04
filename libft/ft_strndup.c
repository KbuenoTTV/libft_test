/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 08:36:22 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:46:30 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strndup(char const *s, size_t len)
{
	char		*ret;
	size_t		i;

	i = -1;
	if (s == NULL)
		return (NULL);
	if ((ret = (char *)malloc(sizeof(*ret) * (len + 1))) == NULL)
		return (NULL);
	while (++i < len)
		ret[i] = s[i];
	ret[i] = 0;
	return (ret);
}
