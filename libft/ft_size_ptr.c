/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 00:19:31 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 16:19:37 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

int      ft_size_ptr(size_t n, int base)
{
	int		len;
	long long    nb;

	nb = n;
	len = 0;
	if (nb == 0)
		len++;
	if (nb < 0)
	{
		len++;
		nb *= (-1);
	}
	while (nb != 0)
	{
		len++;
		nb /= base;
	}
	return (len);
}
