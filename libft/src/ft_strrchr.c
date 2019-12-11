/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:21:21 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:22:09 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			index;
	unsigned char	c_buff;
	char			*s_buff;

	index = ft_strlen(s);
	c_buff = (unsigned char)c;
	s_buff = (char *)s;
	while (index > 0)
	{
		if (s[index] == c_buff)
			return (&s_buff[index]);
		index -= 1;
	}
	if (s[index] == c_buff)
		return (&s_buff[index]);
	return (NULL);
}
