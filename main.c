/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:10:45 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/11 17:27:01 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"
# include <stdio.h>
int main ()
{
	int return_printf;
	char a = 'a';
	char b[] = "teste s";
	
	printf("\n\n ---------------format c testes 1------------------ \n\n");
	return_printf = ft_printf("o caracter e: %c", a);
	printf("\n\n");
	printf("Retorno do ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("O caracter e: %c", a);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------format c testes 1------------------ \n\n");
	return_printf = ft_printf("o char %c e igual ao char %c", a, a);
	printf("\n\n");
	printf("Retorno do ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("o char %c e igual ao char %c", a, a);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
	printf("\n\n ---------------format s testes------------------ \n\n");
	return_printf = ft_printf("A string e: %s", b);
	printf("\n\n");
	printf("Retorno da ft_printf: %d", return_printf);
	printf("\n\n");
	return_printf = printf("A string e: %s", b);
	printf("\n\n");
	printf("Retorno da printf: %d", return_printf);
}
