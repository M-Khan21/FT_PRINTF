/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:24:31 by makhan            #+#    #+#             */
/*   Updated: 2023/06/06 18:21:42 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//This is the function that checks the format,
//and converts and prints the specified conversions.
//I would like to call it check_format_and_print but in short checkp.
int	checkp(const char *c, void *arg)
{
	if (*c == 'c')
		ft_pchar((char)arg);
	else if (*c == 's')
		ft_pstr(arg);
	else if (*c == 'i')
		ft_pint((int)arg);
	else if (*c == 'd')
		ft_pint((int)arg);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	x;
	int		i;
	void	*value;

	va_start(x, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX", str[i]))
			{
				value = va_arg(x, void *);
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
	return (0);
}

int	main(void)
{
	char	*str;

	str = "Allah";
	ft_printf("%s%s! Allah the %i and only!\n", "Subhan", str, 1);
	ft_printf("%i\n", 23464);
	return (0);
}
