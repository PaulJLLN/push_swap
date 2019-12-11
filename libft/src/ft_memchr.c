/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:10:56 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:11:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_buff;

	s_buff = (unsigned char*)s;
	index = 0;
	while (index < n)
	{
		if (s_buff[index] == (unsigned char)c)
			return (&s_buff[index]);
		index += 1;
	}
	return (NULL);
}
