/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _di_verifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:39:18 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 01:36:05 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	_di_verifier(int d, char **string)
{
	int		counter;
	char	*str;

	counter = 0;
	*string = ft_itoa(d);
	str = *string;
	while (str[counter])
		write(1, &str[counter++], 1);
	return (counter);
}
