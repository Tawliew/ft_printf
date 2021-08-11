/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:02:01 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/11 17:58:08 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

static int	func_len(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 1;
	if (nb < 0)
	{
		count++;
		nb *= (-1);
	}
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr_n;
	long	nb;
	int		i;

	i = 0;
	ptr_n = (char *)malloc(sizeof(char) * func_len(n) + 1);
	if (!ptr_n)
		return (NULL);
	if (n < 0)
		ptr_n[0] = '-';
	nb = n;
	if (nb < 0)
		nb *= (-1);
	ptr_n[func_len(n) - i++] = '\0';
	while (nb >= 10)
	{
		ptr_n[func_len(n) - i++] = (nb % 10) + '0';
		nb /= 10;
	}
	ptr_n[func_len(n) - i++] = (nb % 10) + '0';
	return (ptr_n);
}
