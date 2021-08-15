/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:39:14 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 01:52:13 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_utoa(unsigned int n)
{
	char		*ptr_n;
	size_t		nb;
	size_t		size_ptr;

	size_ptr = ft_size_ptr(n, 10);
	ptr_n = (char *)calloc(sizeof(char), size_ptr + 1);
	if (!ptr_n)
		return (NULL);
	nb = n;
	size_ptr--;
	while (nb >= 10)
	{
		ptr_n[size_ptr--] = (nb % 10) + '0';
		nb /= 10;
	}
	ptr_n[size_ptr--] = (nb % 10) + '0';
	return (ptr_n);
}
