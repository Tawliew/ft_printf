/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:11:25 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 01:36:38 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	_p_verifier(size_t p, char **string)
{
	size_t	counter;
	char	*str;

	counter = 0;
	*string = ft_utoh(p);
	str = *string;
	write(1, "0x", 2);
	while (str[counter])
		write(1, &str[counter++], 1);
	return (counter + 2);
}
