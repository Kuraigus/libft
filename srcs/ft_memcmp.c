/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:39:22 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 19:42:37 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*dest;
	const unsigned char		*src;

	if (n <= 0)
		return (0);
	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	i = 0;
	while (++i < n && *dest == *src)
	{
		src++;
		dest++;
	}
	return ((int)(*dest - *src));
}
