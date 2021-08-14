/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _u_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:40:50 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/13 21:39:39 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

int	_u_verifier(unsigned int u)
{
	char	*string;
	int		counter;

	counter = 0;
	string = ft_utoa(u);
	while(string[counter])
		write(1, &string[counter++], 1);
	return(counter);
}
