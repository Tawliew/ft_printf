/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:02:01 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 16:15:05 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_itoa(int n)
{
	char	*ptr_n;
	long	nb;
	int		i;
	int		len;

	len = ft_size_ptr(n);
	i = 0;
	ptr_n = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr_n)
		return (NULL);
	if (n < 0)
		ptr_n[0] = '-';
	nb = n;
	if (nb < 0)
		nb *= (-1);
	ptr_n[len - i++] = '\0';
	while (nb >= 10)
	{
		ptr_n[len - i++] = (nb % 10) + '0';
		nb /= 10;
	}
	ptr_n[len - i++] = (nb % 10) + '0';
	return (ptr_n);
}
