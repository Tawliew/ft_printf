/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _u_verifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:40:50 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/12 21:09:50 by luizfern         ###   ########.fr       */
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

char	*ft_utoa(size_t n)
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

int	_u_verifier(unsigned int u)
{
	char	*string;
	int		counter;

	counter = 0;
	string = ft_utoa(u);
	while(string[counter])
		write(1, &string[counter++], 1);
	return(counter);
}
