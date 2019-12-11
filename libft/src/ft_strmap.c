/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:19:58 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:20:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (s != NULL)
	{
		if (!(str = ft_strdup(s)))
			return (NULL);
	}
	else
		return (NULL);
	while (str[i] != 0)
	{
		str[i] = f(str[i]);
		i += 1;
	}
	return (str);
}
