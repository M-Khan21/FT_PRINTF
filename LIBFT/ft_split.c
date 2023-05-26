/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:16:23 by makhan            #+#    #+#             */
/*   Updated: 2023/01/14 23:16:47 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char delimiter)
{
	int	word_count;

	word_count = 0;
	word_count = 0;
	while (*s)
	{
		while (*s == delimiter)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != delimiter)
			++s;
	}
	return (word_count);
}

static void	ft_assign(char **tab, const char *s, char delimiter)
{
	char		**tab_p;
	const char	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == delimiter)
			++s;
		tmp = s;
		while (*tmp && *tmp != delimiter)
			++tmp;
		if (*tmp == delimiter || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_word_count(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_assign(new, s, c);
	return (new);
}
