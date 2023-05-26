/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 01:24:17 by makhan            #+#    #+#             */
/*   Updated: 2023/01/14 21:03:35 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < dstsize)
		j++;
	while (src[k] && (j + k + 1) < dstsize)
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != dstsize)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
