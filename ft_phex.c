/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 00:46:30 by makhan            #+#    #+#             */
/*   Updated: 2023/06/25 13:31:35 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print number in Hexadecimal (base 16) format

//Function to calculate the length of hex
int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

//ft_print_hexadecimal_format i.e ft_phex
void	ft_put_hex(unsigned int n, const char c)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, c);
		ft_put_hex(n % 16, c);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (c == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (c == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	ft_phex(unsigned int n, const char c)
{
	int	i;

	if (n == 0)
	{
		i = write(1, "0", 1);
		return (i);
	}
	else
		ft_put_hex(n, c);
	return (ft_hexlen(n));
}
