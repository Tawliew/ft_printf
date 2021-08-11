/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_verifier.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:07:43 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/11 17:12:34 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"
int		_s_verifier(char *string)
{
	int counter;

	counter = 0;
	while (string[counter])
		write(1, &string[counter++], 1);
	return (counter);
}

