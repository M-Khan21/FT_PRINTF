/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:11:46 by makhan            #+#    #+#             */
/*   Updated: 2023/06/06 20:16:03 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print integer
//ft_print_integer i.e ft_pint in short
int	ft_pint(int c)
{
	unsigned int	i;
	int				value;

	i = 1;
	value = c;
	if (c == -2147483648)
		return (11);
	if (c < 0 && c != -2147483648)
	{
		value = -value;
		i++;
	}
	while (value > 9)
	{
		value = value / 10;
		i++;
	}
	ft_putnbr_fd(c, 1);
	return (i);
}
