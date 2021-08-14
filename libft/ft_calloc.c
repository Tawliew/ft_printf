/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 00:05:21 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 00:07:03 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	i;

	i = 0;
	pointer = (void *)malloc(nmemb * size);
	if (!pointer)
		return (NULL);
	while (i < (nmemb * size))
		((unsigned char *)pointer)[i++] = '\0';
	return (pointer);
}
