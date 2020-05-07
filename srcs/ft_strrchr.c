/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:59:15 by joguntij          #+#    #+#             */
/*   Updated: 2020/01/21 16:53:12 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *last_pos;

	last_pos = (0);
	while (*s)
	{
		if (*s == c)
			last_pos = (char*)s;
		++s;
	}
	if (last_pos)
		return ((char*)last_pos);
	else if (c == '\0')
		return ((char*)s);
	return (0);
}
