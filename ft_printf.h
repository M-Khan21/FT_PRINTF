/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:00 by makhan            #+#    #+#             */
/*   Updated: 2023/06/25 12:58:49 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
int		ft_pchar(char c);
int		ft_pstr(char *str);
int		ft_ppercent(void);
int		ft_pint(int c);

int		ft_phex(unsigned int n, const char c);
int		ft_hexlen(unsigned int n);
void	ft_put_hex(unsigned int n, const char c);

int		ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int		ft_pptr(unsigned long long ptr);

int		print_unsigned(unsigned int nb);

// Libft
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int c);
#endif
