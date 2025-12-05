/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:19:26 by srichard          #+#    #+#             */
/*   Updated: 2025/11/27 15:47:17 by srichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
// Principal function
int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
// Auxiliary functions
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
//Conversion functions
int		ft_printf_percent(void);
int		ft_printf_char(int c);
int		ft_printf_str(char *str);
int		ft_printf_nbr(int n);
int		ft_printf_unsigned(unsigned int n);
int		ft_printf_hex(unsigned int n, const char format);
int		ft_printf_ptr(void *ptr);

#endif
