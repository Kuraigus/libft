/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:41:28 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/24 19:25:20 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	int				sinal;
	unsigned int	res;

	res = 0;
	i = 0;
	sinal = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		while (ft_isdigit(str[i]))
		{
			res = (res * 10) + (str[i] - '0');
			i++;
		}
	}
	return (res * sinal);
}
