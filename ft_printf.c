/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:58:18 by makhan            #+#    #+#             */
/*   Updated: 2023/05/17 23:11:59 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, int c)
{
	int len;
	len = ft_strlen(str);

	int i;
	i = 0;


	while(str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'i')
			{
				ft_print_integer(c);
			}
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}

	return len;
}

int main()
{
	int n1 = 10;
	ft_printf("Hello to you %i times you %i great people", 10);
}
