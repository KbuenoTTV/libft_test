/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 08:21:56 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:36:47 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcdup(char const *s, char c)
{
	char		*ret;
	size_t		i;

	if (s == NULL)
		return (NULL);
	i = -1;
	ret = (char *)s;
	while (ret[++i] && ret[i] != c)
		;
	return (ft_strndup(ret, i));
}
