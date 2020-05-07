/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:11:54 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 19:25:51 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s != NULL)
	{
		i = 0;
		str = ft_memalloc(ft_strlen(s) + 1);
		if (!str)
			return (NULL);
		ft_strcpy(str, s);
		while (str[i])
		{
			str[i] = (*f)(i, str[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
