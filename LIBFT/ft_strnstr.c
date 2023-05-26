/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:34:11 by makhan            #+#    #+#             */
/*   Updated: 2023/01/14 19:48:30 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack && i <= len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (NULL);
}
