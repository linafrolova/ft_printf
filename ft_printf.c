/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:21:31 by lfrolova          #+#    #+#             */
/*   Updated: 2024/01/12 19:48:40 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	print_str(char *str)
{
	int				i;

	i = 0;
	if (!str)
		return (print_str("(null)"));
	while (*str != '\0')
	{
		ft_putchar_fd(*str++, 1);
		i++;
	}
	return (i);
}

int	print_number(long n, char *base)
{
	int	counter;
	int	base_type;

	counter = 0;
	base_type = ft_strlen(base);
	if (n == 0)
	{
		ft_putchar_fd(base[0], 1);
		counter++;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', 1);
			counter++;
			n = -n;
		}
		if (n >= base_type)
			counter += print_number(n / base_type, base);
		ft_putchar_fd(base[n % base_type], 1);
		counter++;
	}
	return (counter);
}

int	ft_check_type(const char *format, va_list arg)
{
	int	counter;

	counter = 0;
	if (*format == 'c')
		counter += print_char(va_arg(arg, int));
	else if (*format == 's')
		counter += print_str(va_arg(arg, char *));
	else if (*format == 'p')
	{
		counter += ft_print_ptr(va_arg(arg, uintptr_t));
	}
	else if (*format == 'd' || *format == 'i')
		counter += print_number(va_arg(arg, int), DECIMAL);
	else if (*format == 'u')
		counter += print_number(va_arg(arg, unsigned int), DECIMAL);
	else if (*format == 'x')
		counter += print_number(va_arg(arg, unsigned int), LOWER_HEXA);
	else if (*format == 'X')
		counter += print_number(va_arg(arg, unsigned int), UPPER_HEXA);
	else if (*format == '%')
		counter += print_char('%');
	return (counter);
}

int	ft_printf(const char *input, ...)
{
	unsigned int	sym_counter;
	va_list			args;

	if (!input)
		return (0);
	sym_counter = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input != '%')
		{
			ft_putchar_fd(*input, 1);
			sym_counter++;
		}
		else
		{
			input++;
			sym_counter += ft_check_type(input, args);
		}
		input++;
	}
	va_end(args);
	return (sym_counter);
}
