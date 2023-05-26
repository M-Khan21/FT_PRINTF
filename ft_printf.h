/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:00 by makhan            #+#    #+#             */
/*   Updated: 2023/05/18 20:10:47 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include "LIBFT/libft.h"

int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_integer(int c);
int		ft_print_percentage();


#endif
