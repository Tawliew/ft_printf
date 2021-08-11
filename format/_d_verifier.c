/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _d_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:39:18 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/11 18:38:25 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

int _di_verifier(int d)
{
	int counter;
	char *string;

	counter = 0;
	string = ft_itoa(d);
	while (string[counter])
		write(1, &string[counter++], 1);
	return (counter);
}
