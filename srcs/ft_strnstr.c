/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:15:07 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 19:01:24 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char*)str);
	while (i < len && str[i])
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char*)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
