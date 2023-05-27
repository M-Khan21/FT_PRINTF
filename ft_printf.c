/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:24:31 by makhan            #+#    #+#             */
/*   Updated: 2023/05/26 20:29:32 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//This is the function that checks the format, and converts and prints the specified conversions.
//I would like to call it check_format_and_print but in short checkp.
int checkp(const char *c, void *arg)
{
	if (*c == 'c')
		ft_pchar((char)arg);
	else if (*c == 's')
		ft_pstring(arg);
	return 0;
}


int	ft_printf(const char * str, ...)
{
	va_list x;
	int i;

	va_start(x, str);
	i = 0;

	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX", str[i]))
			{
				void* value;
				value = va_arg(x, void*);
				checkp(&str[i], value);
			}
			if (str[i] == '%')
				ft_ppercent();
		}
		else
			ft_pchar(str[i]);

		i++;
	}
	va_end(x);
	return 0;
}

int main()
{
	//ft_printf("Hello\n");
	//ft_printf("Hello%%\n");
	//ft_printf("Hello%c\n", 'a');
	//ft_printf("Hello%s\n", "Hello");
	//ft_printf("%%Hello%s%c\n", "Hello", 'a');
	ft_printf("%s%c%c%c%c%c! Allah the %c and only!\n", "Subhan", 'A', 'L', 'L', 'A', 'H', '1');
	return 0;
}
