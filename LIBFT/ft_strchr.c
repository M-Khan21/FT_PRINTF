/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:01:54 by makhan            #+#    #+#             */
/*   Updated: 2023/06/06 22:02:11 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == c)
			return ((char *)str);
		else if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}
