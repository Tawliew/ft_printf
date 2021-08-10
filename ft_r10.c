/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:06:41 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/09 23:05:38 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// testes inicias com ft_printf
//
//
# include "libftprintf.h"

int	ft_printf(const char *string)
{
	//va_list args;
	int char_print;

	char_print = 0;
	//va_start(args, string);
	while (string[char_print])
	{
		write(1, &string[char_print], 1);
		char_print++;
	}
	//va_end(args);
	return (char_print);
}
