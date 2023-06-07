/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:24:31 by makhan            #+#    #+#             */
/*   Updated: 2023/06/06 21:14:29 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//This is the function that checks the format,
//and converts and prints the specified conversions.
//I would like to call it check_format_and_print but in short checkp.
int	checkp(const char *c, void *arg)
{
	int	i;

	i = 0;
	if (*c == 'c')
		i += ft_pchar((int)arg);
	else if (*c == 's')
		i += ft_pstr((char *)arg);
	else if (*c == 'i')
		i += ft_pint((int)arg);
	else if (*c == 'd')
		i += ft_pint((int)arg);
	else if (*c == 'x')
		i += ft_phex((unsigned int)arg, 87);
	else if (*c == 'X')
		i += ft_phex((unsigned int)arg, 55);
	else if (*c == 'u')
		i += print_unsigned((unsigned int)arg);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				i += check_type(input, va_arg(args, void *));
			else if (*input == '%')
				i += print_char('%');
		}
		else
			i = i + print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}
