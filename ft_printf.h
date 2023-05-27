/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:00 by makhan            #+#    #+#             */
/*   Updated: 2023/05/26 19:59:19 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include "LIBFT/libft.h"
#include <stdarg.h>

int		ft_printf(const char * str, ...);
int		ft_pchar(char c);
int		ft_pstring(char *str);
int		ft_ppercent();

#endif
