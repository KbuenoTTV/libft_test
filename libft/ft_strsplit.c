/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:58:38 by jchichep          #+#    #+#             */
/*   Updated: 2015/01/04 02:41:20 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_nb_word(char const *s, char c)
{
	int			word;
	int			i;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != 0)
		{
			word++;
			while (s[i] && s[i++] != c)
				;
		}
	}
	return (word);
}

static int		init_var(char const *s, char c, int *i, int *j)
{
	*i = -1;
	*j = 0;
	if (s == NULL)
		return (-1);
	return (find_nb_word(s, c));
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			i;
	int			j;
	int			word;

	if ((word = init_var(s, c, &i, &j)) == -1)
		return (NULL);
	if ((tab = ft_memalloc((word + 1) * sizeof(*tab))) == NULL)
		return (NULL);
	while (s[++i] && s[i] == c)
		;
	while (j < word)
	{
		if ((tab[j] = ft_strcdup(s + i, c)) == NULL)
		{
			ft_freestrtab(&tab);
			return (NULL);
		}
		while (s[i++] && s[i] != c)
			;
		while (s[i++] && s[i] == c)
			;
		++j;
	}
	return (tab);
}
