/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:10:59 by makhan            #+#    #+#             */
/*   Updated: 2023/05/23 21:36:50 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percentage()
{
	char c = '%';

	write(1, &c , 1);
	return 0;
}

/*int main()
{
	ft_print_percentage();
	return 0;
}*/
