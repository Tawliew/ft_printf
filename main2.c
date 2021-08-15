/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:17:52 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 21:52:30 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stdio.h>
#include <limits.h>
# include "libftprintf.h"
int main()
{
	int a = 0;
	int retorno;
	void	*pointer;
	pointer = NULL;
	printf("-------------------------------LEAK OF FORMAT C -------------------------\n");
	retorno = printf("cenario com leak com numero 10: %c\n", 'a');
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario com leak com numero 10: %c\n", 'a');
	printf("retorno da printf foi: %d\n", retorno);
	printf("-------------------------------LEAK OF FORMAT U -------------------------\n");
	retorno = printf("cenario com leak com numero 0: %u\n", a);
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario com leak com numero 0: %u\n", a);
	printf("retorno da printf foi: %d\n", retorno);
	printf("-------------------------------LEAK OF FORMAT U MIN INT -1-------------------------\n");
	retorno = printf("cenario com leak com MIN INT -1 : %u\n", -1);
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario com leak com MIN INT -1 : %u\n", -1);
	printf("retorno da printf foi: %d\n", retorno);
	printf("-------------------------------LEAK OF FORMAT X -------------------------\n");
	retorno = printf("cenario com leak com numero 10: %x\n", a);
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario com leak com numero 10: %x\n", a);
	printf("retorno da printf foi: %d\n", retorno);
	printf("-------------------------------LEAK OF FORMAT P  -------------------------\n");
	retorno = printf("This %p is even stranger\n", 18446744073709551615);
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("This %p is even stranger\n", 18446744073709551615);
	printf("retorno da ft_printf foi: %d\n", retorno);
	printf("-------------------------------LEAK OF FORMAT S -------------------------\n");
	retorno = printf("cenario ponteiro null : %s\n", 0);
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario ponteiro null : %s\n", 0);
	printf("retorno da ft_printf foi: %d\n", retorno);

}
