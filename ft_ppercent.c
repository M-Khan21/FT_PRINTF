/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppercent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:10:59 by makhan            #+#    #+#             */
/*   Updated: 2023/06/02 09:17:51 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print %
//ft_print_percentage i.e ft_ppercent
int	ft_ppercent()
{
	char c = '%';

	write(1, &c , 1);
	return (1);
}

/*int main()
{
	ft_ppercent();
	return 0;
}
*/
