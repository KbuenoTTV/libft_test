/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:35:02 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:52:13 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	unsigned int	strt;
	size_t			len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	strt = 0;
	while (s[strt] && (s[strt] == ' ' || s[strt] == '\n' || s[strt] == '\t'))
		++strt;
	if (len > 0)
		--len;
	while (len > 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		--len;
	if (len < strt)
		len = 0;
	else
		len = len - strt + 1;
	return (ft_strsub(s, strt, len));
}
