/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:06:51 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 19:29:47 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*destiny;
	const unsigned char		*source;

	i = 1;
	destiny = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (dst > src)
		while (i <= len && dst != src)
		{
			destiny[len - i] = source[len - i];
			i++;
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
