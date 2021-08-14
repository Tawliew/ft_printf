/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _p_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:11:25 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 17:15:13 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

int	_p_verifier(size_t p, char **string)
{
	int		counter;
	char	*str;
	counter = 0;
	*string = ft_utoh(p);
	str = *string;
	write(1, "0x", 2);
	while(str[counter])
		write(1, &str[counter++], 1);
	return (counter + 2);
}
