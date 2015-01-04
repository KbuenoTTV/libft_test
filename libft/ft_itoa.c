/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 05:13:52 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 01:41:28 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			init_var(int n, unsigned int *nb, int *len, char **ret)
{
	if (n < 0)
	{
		*len = 2;
		*nb = -n;
	}
	else
	{
		*len = 1;
		*nb = n;
	}
	while (n / 10 != 0)
	{
		*len = *len + 1;
		n = n / 10;
	}
	*ret = ft_strnew(*len);
}

char				*ft_itoa(int n)
{
	unsigned int	nb;
	int				len;
	char			*ret;

	if (n == 0)
		return (ft_strdup("0"));
	init_var(n, &nb, &len, &ret);
	if (ret == NULL)
		return (NULL);
	if (n < 0)
		ret[0] = '-';
	--len;
	while (nb > 0)
	{
		ret[len] = '0' + nb % 10;
		--len;
		nb /= 10;
	}
	return (ret);
}
