/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 00:23:39 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:45:58 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strmap(char const *s, char (*f)(char))
{
	char				*str;
	int					i;

	i = 0;
	if (s == NULL || (str = ft_strdup(s)) == NULL)
		return (NULL);
	while (str[i] && f)
	{
		str[i] = f(str[i]);
		++i;
	}
	return (str);
}
