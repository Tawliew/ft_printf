/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:17:52 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 17:37:41 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stdio.h>
# include "libftprintf.h"
int main()
{
	int a = 10;
	int retorno;
	void	*pointer;
	printf("-------------------------------LEAK OF FORMAT C -------------------------\n");
	retorno = printf("cenario com leak com numero 10: %c\n", 'a');
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario com leak com numero 10: %c\n", 'a');
	printf("retorno da printf foi: %d\n", retorno);
	printf("-------------------------------LEAK OF FORMAT X -------------------------\n");
	retorno = printf("cenario com leak com numero 10: %x\n", a);
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario com leak com numero 10: %x\n", a);
	printf("retorno da printf foi: %d\n", retorno);
	printf("-------------------------------LEAK OF FORMAT P part 2 -------------------------\n");
	retorno = printf("cenario com leak com p: %p\n", pointer);
	printf("retorno da printf foi: %d\n", retorno);
	retorno = ft_printf("cenario com leak com p: %p\n", pointer);
	printf("retorno da printf foi: %d\n", retorno);
}
