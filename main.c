/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:10:45 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/12 21:03:33 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"
# include <stdio.h>
int main ()
{
	int return_printf;
	char a = 'a';
	char b[] = "teste s";
	
	printf("\n\n ---------------FORMAT C TESTS #1------------------ \n\n");
	return_printf = ft_printf("o caracter e: %c", a);
	printf("\n\n");
	printf("Retorno do ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O caracter e: %c", a);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT C TESTS #1------------------ \n\n");
	return_printf = ft_printf("o char %c e igual ao char %c", a, a);
	printf("\n\n");
	printf("Retorno do ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("o char %c e igual ao char %c", a, a);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT S TESTS--------------------- \n\n");
	return_printf = ft_printf("A string e: %s", b);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("A string e: %s", b);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT D TESTS 1--------------------- \n\n");
	return_printf = ft_printf("O numero e: %d", 42);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O numero e: %d", 42);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT D TESTS 2--------------------- \n\n");
	return_printf = ft_printf("O numero %d e diferente do numero %d", 42, 24);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O numero %d e diferente do numero %d", 42, 24);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT D TESTS 3--------------------- \n\n");
	return_printf = ft_printf("printando numero muiiiito grande 5000000000000: %d", 5000000000000);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("printando numero muiiiito grande 5000000000000: %d", 5000000000000);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT I TESTS 1--------------------- \n\n");
	return_printf = ft_printf("O numero e: %i", 42);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O numero e: %i", 42);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT I TESTS 2--------------------- \n\n");
	return_printf = ft_printf("O numero %i e diferente do numero %i", 42, 24);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O numero %i e diferente do numero %i", 42, 24);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT I TESTS 3--------------------- \n\n");
	return_printf = ft_printf("printando numero muiiiito grande 5000000000000: %i", 5000000000000);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("printando numero muiiiito grande 5000000000000: %i", 5000000000000);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT U TESTS --------------------- \n\n");
	return_printf = ft_printf("O numero e %u", 24);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O numero e %u", 24);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT U TESTS 2 --------------------- \n\n");
	return_printf = ft_printf("O numero e %u", 0);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O numero e %u", 0);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------FORMAT U TESTS 3 --------------------- \n\n");
	return_printf = ft_printf("O numero e %u", -1);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O numero e %u", -1);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
}
