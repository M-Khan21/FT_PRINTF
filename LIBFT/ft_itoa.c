/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:30:41 by makhan            #+#    #+#             */
/*   Updated: 2023/01/14 19:58:22 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_positive_number(int n)
{
	if (n < 0)
		return ((unsigned int)-n);
	return ((unsigned int)n);
}

static int	get_digit_count(int n)
{
	int				count;
	unsigned int	nb;

	count = n < 0;
	nb = get_positive_number(n);
	while (nb / 10 != 0)
	{
		nb /= 10;
		count++;
	}
	return (count + 2);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	nb;
	int				dg;

	dg = get_digit_count(n);
	res = malloc((dg) * sizeof(char));
	if (!res)
		return (NULL);
	res[--dg] = '\0';
	nb = get_positive_number(n);
	while (nb / 10 != 0)
	{
		res[--dg] = (nb % 10) + '0';
		nb /= 10;
	}
	res[--dg] = nb + '0';
	if (dg == 1)
		res[--dg] = '-';
	return (res);
}
