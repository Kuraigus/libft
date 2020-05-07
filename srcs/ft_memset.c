/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:41:42 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 19:32:30 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = b;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
