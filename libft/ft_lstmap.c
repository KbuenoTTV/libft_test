/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 15:51:39 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:02:21 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void			free_list(void *content, size_t t)
{
	if (content != NULL)
		free(content);
	(void)t;
}

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*temp;
	t_list			*new;
	t_list			*begin;
	t_list			*temp2;

	begin = NULL;
	while (lst)
	{
		if (f)
			temp = f(lst);
		else
			temp = lst;
		if ((new = ft_lstnew(temp->content, temp->content_size)) == NULL)
		{
			ft_lstdel(&begin, free_list);
			return (NULL);
		}
		if (begin == NULL)
			begin = new;
		else
			temp2->next = new;
		temp2 = new;
		lst = lst->next;
	}
	return (begin);
}
