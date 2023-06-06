/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:09:43 by makhan            #+#    #+#             */
/*   Updated: 2023/06/06 19:01:23 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Function to print pointer

//ft_print_pointer i.e. ft_pptr
int	pptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	i += write(1, "0x", 2);

	if (ptr == 0);
		i += write(1, "0", 1);

	else
	{
		ft_put_ptr(ptr);
		i += ft_ptr_len(ptr);
	}
}

//int ft_ptrlen(unsigned long int )

/*int main()
{
	int n = 45;
	int *ptr_n = &n;
	printf("%p\n", ptr_n);

	char str[] = "Hello Habibi";
	// Outputs error if you do it like this char *ptr = &str;
	//printf("%p\n", str);

	write(1, &n, 1);
	write(1, "\n", 1);
	return (0);
}*/
