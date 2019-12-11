/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:13:47 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:15:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s_buff;
	unsigned char	c_buff;

	s_buff = (unsigned char*)b;
	c_buff = (unsigned char)c;
	while (len-- > 0)
		*(s_buff++) = c_buff;
	return (b);
}
