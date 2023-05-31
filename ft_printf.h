/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:00 by makhan            #+#    #+#             */
/*   Updated: 2023/05/31 00:31:12 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include "LIBFT/libft.h"
#include <stdarg.h>

int		ft_printf(const char * str, ...);
int		ft_pchar(char c);
int		ft_pstr(char *str);
int		ft_ppercent();
int		ft_pint(int c);

#endif
