/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _x_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 00:11:39 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 01:34:28 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	_x_verifier(unsigned int x, char **string)
{
	int		counter;
	char	*str;

	counter = 0;
	*string = ft_utoh(x);
	str = *string;
	while (str[counter])
		write(1, &str[counter++], 1);
	return (counter);
}
