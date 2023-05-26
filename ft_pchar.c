/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:12:15 by makhan            #+#    #+#             */
/*   Updated: 2023/05/26 17:42:18 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print char
//ft_print_char i.e ft_pchar in short
int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return 0;
}

/*int main()
{
	char c = 'A';
	char *ptr = &c;
	ft_print_char(*ptr);
	return 0;
}*/
