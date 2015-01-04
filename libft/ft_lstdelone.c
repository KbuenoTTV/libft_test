/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 15:10:07 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 01:52:23 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*temp;

	if (alst == NULL || *alst == NULL)
		return ;
	temp = *alst;
	if (del)
		del(temp->content, temp->content_size);
	free(temp);
	*alst = NULL;
}
