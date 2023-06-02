/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:14:17 by makhan            #+#    #+#             */
/*   Updated: 2023/06/02 09:13:44 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print string
//ft_print-string i.e ft_pstr
int	ft_pstr(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	while (str[i])
		i++;
	return (i);
}


/*int main ()
{
	char str[] = "Coding wala\n";

	ft_print_string(str);
	return 0;
}*/
//Habibi1










