/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:02:22 by lfrolova          #+#    #+#             */
/*   Updated: 2024/01/12 19:43:28 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define UPPER_HEXA "0123456789ABCDEF"
# define LOWER_HEXA "0123456789abcdef"
# define DECIMAL "0123456789"
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *input, ...);
int		print_char(char c);
int		print_str(char *str);
int		print_number(long n, char *base);
int		ft_check_type(const char *format, va_list arg);
int		ft_ptr_len(uintptr_t num);
int		ft_print_ptr(uintptr_t ptr);
void	ft_put_ptr(uintptr_t num);

#endif
