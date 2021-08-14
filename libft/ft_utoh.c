/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:58:11 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 00:15:03 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

char    *ft_utoh(unsigned int x)
{
	char	*ptr_n;
	size_t	nb;
	size_t	tmp;
	size_t	i;
	size_t	size_pointer;

	i = 0;
	size_pointer = ft_size_ptr(x);
	ptr_n = (char *)ft_calloc(sizeof(char), size_pointer + 1);
	if (!ptr_n)
		return (NULL);
	nb = x;
	ptr_n[size_pointer - i++] = '\0';
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp >= 10)
			ptr_n[size_pointer - i++] = (tmp - 10 + 'a');
		else
			ptr_n[size_pointer - i++] = (tmp + '0');
		nb /= 16;
	}
	while (!*ptr_n)
		ptr_n++;
	return (ptr_n);
}
