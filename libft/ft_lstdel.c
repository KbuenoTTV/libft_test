/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 16:11:49 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 01:52:10 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*temp;
	t_list			*temp2;

	temp = *alst;
	if (alst == NULL || *alst == NULL)
		return ;
	while (temp != NULL)
	{
		temp2 = temp->next;
		if (del)
			del(temp->content, temp->content_size);
		free(temp);
		temp = temp2;
	}
	*alst = NULL;
}
