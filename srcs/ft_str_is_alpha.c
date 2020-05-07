/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:33:57 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/22 23:37:17 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_isalpha(*str))
			return (0);
		str++;
	}
	return (1);
}