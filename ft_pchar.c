/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:12:15 by makhan            #+#    #+#             */
/*   Updated: 2023/06/02 08:42:02 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print char
//ft_print_char i.e ft_pchar in short
int	ft_pchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

/*int main()
{
	char c = 'A';
	char *ptr = &c;
	ft_print_char(*ptr);
	return 0;
}*/
