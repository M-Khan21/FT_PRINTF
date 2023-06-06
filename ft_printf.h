/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:00 by makhan            #+#    #+#             */
/*   Updated: 2023/06/06 18:06:39 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "LIBFT/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_pchar(char c);
int		ft_pstr(char *str);
int		ft_ppercent(void);
int		ft_pint(int c);
int		ft_phex(unsigned int n, const char c);

int		ft_hexlen(unsigned int n);
void	ft_put_hex(unsigned int n, const char c);

#endif
