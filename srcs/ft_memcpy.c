/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:19:33 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 19:31:01 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest;
	const unsigned char		*source;

	i = 0;
	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	while (i < n && dst != src)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
