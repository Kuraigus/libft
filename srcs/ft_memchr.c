/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:13:46 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 17:53:40 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*str;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		if ((str[i]) == (unsigned char)c)
			return ((void*)&str[i]);
		i++;
	}
	return (0);
}
