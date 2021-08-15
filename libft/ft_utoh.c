/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:58:11 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 01:50:08 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_utoh(size_t x)
{
	char	*ptr_n;
	size_t	nb;
	size_t	tmp;
	size_t	size_pointer;

	size_pointer = ft_size_ptr(x, 16);
	ptr_n = (char *)ft_calloc(sizeof(char), size_pointer + 1);
	if (!ptr_n)
		return (NULL);
	nb = x;
	size_pointer--;
	if (nb == 0)
		ptr_n[size_pointer] = '0';
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp >= 10)
			ptr_n[size_pointer--] = (tmp - 10 + 'a');
		else
			ptr_n[size_pointer--] = (tmp + '0');
		nb /= 16;
	}
	return (ptr_n);
}
