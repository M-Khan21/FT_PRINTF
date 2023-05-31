/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:11:46 by makhan            #+#    #+#             */
/*   Updated: 2023/05/31 00:35:12 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print integer
//ft_print_integer i.e ft_pint in short
int ft_pint(int c)
{
	ft_putnbr_fd(c, 1);
	return 0;
}



/*int main()
{
	int n = 45;
	float f =-2147483648;

	ft_pint(n);
	write(1,"\n", 2);
	ft_pint(f);
	write(1,"\n", 2);
	return 0;
}*/

