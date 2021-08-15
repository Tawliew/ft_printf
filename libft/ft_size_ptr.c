/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 00:19:31 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 00:52:24 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

int      ft_size_ptr(size_t n, int base)
{
	int			len;
	size_t		nb;

	nb = n;
	len = 0;
	if (nb == 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb /= base;
	}
	return (len);
}
