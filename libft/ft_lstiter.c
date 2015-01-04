/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 18:32:55 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:03:05 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list				*temp;

	while (lst)
	{
		temp = lst->next;
		if (f)
			f(lst);
		lst = temp;
	}
}
