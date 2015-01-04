/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrtab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 13:45:07 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 01:36:22 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void				ft_freestrtab(char ***tab)
{
	int				i;

	if (*tab == NULL)
		return ;
	i = 0;
	while (*tab[i])
	{
		free(*tab[i]);
		*tab[i++] = NULL;
	}
	free(*tab);
	*tab = NULL;
}
