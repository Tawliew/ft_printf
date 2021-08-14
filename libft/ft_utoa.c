/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:39:14 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/13 21:45:02 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

static int	func_len(size_t n)
{
	int		len;
	long	nb;

	nb = n;
	len = 1;
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char		*ptr_n;
	size_t		nb;
	size_t		i;

	i = 0;
	ptr_n = (char *)malloc(sizeof(char) * func_len(n) + 1);
	if (!ptr_n)
		return (NULL);
	nb = n;
	ptr_n[func_len(n) - i++] = '\0';
	while (nb >= 10)
	{
		ptr_n[func_len(n) - i++] = (nb % 10) + '0';
		nb /= 10;
	}
	ptr_n[func_len(n) - i++] = (nb % 10) + '0';
	return (ptr_n);
}
