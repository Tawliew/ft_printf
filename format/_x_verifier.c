/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _x_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 00:11:39 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 15:35:17 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

int	_x_verifier(unsigned int x)
{
	char	*string;
	int		counter;

	counter = 0;
	string = ft_utoh(x);
	while(string[counter])
		write(1, &string[counter++], 1);
	return (counter);
}
