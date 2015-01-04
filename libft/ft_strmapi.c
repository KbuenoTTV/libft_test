/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 01:04:52 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:46:10 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s == NULL || (str = ft_strdup(s)) == NULL)
		return (NULL);
	while (str[i] && f)
	{
		str[i] = f(i, str[i]);
		++i;
	}
	return (str);
}
