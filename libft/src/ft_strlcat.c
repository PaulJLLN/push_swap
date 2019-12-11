/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:19:51 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:20:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	dst_size;
	size_t	src_size;

	count = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dst_size)
		return (size + src_size);
	while (count < size - dst_size - 1 && count < src_size)
	{
		dst[dst_size + count] = src[count];
		count += 1;
	}
	dst[dst_size + count] = 0;
	return (src_size + dst_size);
}
