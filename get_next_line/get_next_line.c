/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 01:00:52 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 01:00:56 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "libft.h"

static int		gnl_next(char **str, char **mem, char **tmp, int ret)
{
	if (ret == -1 || (*str = ft_strcdup(*mem, '\n')) == NULL)
		return (-1);
	if (ret == 0)
	{
		free(*mem);
		*mem = NULL;
		return (0);
	}
	if ((*tmp = ft_strdup(ft_strchr(*mem, '\n') + 1)) == NULL)
		return (-1);
	free(*mem);
	*mem = *tmp;
	return (1);
}

int				get_next_line(int fd, char **str)
{
	static char	*mem = NULL;
	char		*buf;
	char		*tmp;
	int			ret;

	ret = 1;
	if ((buf = ft_memalloc(BUFF_SIZE + 1)) == NULL)
		return (-1);
	while ((mem == NULL || ft_strchr(mem, '\n') == NULL)
		&& (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if ((tmp = ft_strjoin(mem, buf)) == NULL)
			return (-1);
		if (mem != NULL)
			free(mem);
		mem = tmp;
	}
	free(buf);
	return (gnl_next(str, &mem, &tmp, ret));
}
