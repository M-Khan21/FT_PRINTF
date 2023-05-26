/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppercentage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:10:59 by makhan            #+#    #+#             */
/*   Updated: 2023/05/26 17:42:59 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print %
//ft_print_percentage i.e ft_ppercent
int	ft_ppercent()
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
