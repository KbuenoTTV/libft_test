/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 06:51:26 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 01:31:40 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				i;
	int				neg;
	int				ret;

	i = 0;
	ret = 0;
	neg = 0;
	while (ft_isspace(str[i]) == 1)
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		++i;
	}
	while (ft_isdigit((int)str[i]) == 1)
	{
		if (neg == 0)
			ret = ret * 10 + str[i] - '0';
		else
			ret = ret * 10 - str[i] + '0';
		++i;
	}
	return (ret);
}
