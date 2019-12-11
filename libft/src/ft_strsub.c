/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:21:38 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:22:09 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	count = 0;
	if (!(str = ft_strnew(len)) || !s)
		return (NULL);
	while (count < len)
	{
		str[count] = s[start + count];
		count += 1;
	}
	return (str);
}
