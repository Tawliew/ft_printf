/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _s_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:07:43 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 01:38:56 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	_s_verifier(char *string)
{
	int	counter;

	counter = 0;
	if (!string)
		return (write(1, "(null)", 6));
	while (string[counter])
		write(1, &string[counter++], 1);
	return (counter);
}
