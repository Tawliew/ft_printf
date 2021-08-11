/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:06:41 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/10 23:35:08 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// testes inicias com ft_printf

# include "libftprintf.h"
# include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (!*str && !c)
		return (str);
	return (0);
}
int	_verifier_percent_s(char *string)
{
	int counter;

	counter = 0;
	while (string[counter])
		write(1, &string[counter++], 1);
	return (counter);
}
int	_verifier_percent_c(int c)
{
	int counter;
	
	counter = write(1, &c, 1);

	printf("\n\n counter inside verifier %d", counter);
	return (counter);
}

int	_global_verifier(int format, va_list c)
{
	int contador;

	if (format == 'c')
		contador = _verifier_percent_c(va_arg(c, int));

	else if (format == 's')
		contador =  _verifier_percent_s(va_arg(c, char *));
	else
		contador = 0;
	printf("\n\n contador: %d\n\n", contador);
	return (contador);
}

int	ft_printf(const char *string, ...)
{
	va_list args;
	int char_print;
	int count;

	count = 0;
	char_print = 0;
	va_start(args, string);
	while (string[count])
	{
		if (string[count] == '%' && 
				ft_strchr("cspdiux%", string[count+1]))
		{
			char_print += _global_verifier(string[count+1], args);
			count+=2;
		}
		else
			char_print += write(1, &string[count++], 1);
	}
	va_end(args);
	return (char_print);
}
