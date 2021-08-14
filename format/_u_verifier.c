/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _u_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:40:50 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 17:14:14 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

int	_u_verifier(unsigned int u, char **string)
{
	int		counter;
	char	*str;

	counter = 0;
	*string = ft_utoa(u);
	str = *string;
	while(str[counter])
		write(1, &str[counter++], 1);
	return(counter);
}
