/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:06:41 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 03:23:45 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// testes inicias com ft_printf

#include "libftprintf.h"

int	_global_verifier(int format, va_list c)
{
	int		contador;
	char	*string;

	if (format == 'c')
		contador = _c_verifier(va_arg(c, int));
	else if (format == '%')
		contador = write(1, "%", 1);
	else if (format == 's')
		contador = _s_verifier(va_arg(c, char *));
	else if (format == 'd' || format == 'i')
		contador = _di_verifier(va_arg(c, int), &string);
	else if (format == 'u')
		contador = _u_verifier(va_arg(c, unsigned int), &string);
	else if (format == 'x')
		contador = _x_verifier(va_arg(c, unsigned int), &string);
	else if (format == 'X')
		contador = _xx_verifier(va_arg(c, unsigned int), &string);
	else if (format == 'p')
		contador = _p_verifier(va_arg(c, size_t), &string);
	else
		contador = 0;
	if (ft_strchr("duixXp", format))
		free(string);
	return (contador);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		char_print;
	int		count;

	count = 0;
	char_print = 0;
	va_start(args, string);
	while (string[count])
	{
		if (string[count] == '%' && ft_strchr("cspdiuxX%", string[count + 1]))
		{
			char_print += _global_verifier(string[count + 1], args);
			count += 2;
		}
		else
			char_print += write(1, &string[count++], 1);
	}
	va_end(args);
	return (char_print);
}
