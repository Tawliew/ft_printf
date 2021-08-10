/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:10:45 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/10 00:39:44 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"
# include <stdio.h>
int main (int argc, char **argv)
{
	int return_printf;
	char a = 'a';

	if (argc < 1)
		return (0);
	
	if (argc == 2)
	{
		return_printf = ft_printf("ronaldinho gaucho %c %c", a, a);
		printf("\n\n");
		printf("Retorno do ft_printf: %d", return_printf);
		printf("\n\n");
		return_printf = printf("ronaldinho gaucho %c %c", a, a);
		printf("\n\n");
		printf("Retorno da printf: %d", return_printf);
	}
}
