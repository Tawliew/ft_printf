/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:02:01 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 01:47:27 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

static int	ssize_itoa(long long int n, int base)
{
	int				len;
	long long int	nb;

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

char	*ft_itoa(int n)
{
	char	*ptr_n;
	long	nb;
	int		i;
	int		len;

	len = ssize_itoa(n, 10);
	i = 0;
	ptr_n = (char *)malloc(sizeof(char) * len + 1);
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
