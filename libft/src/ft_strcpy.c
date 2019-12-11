/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:17:38 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:17:50 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	index;

	index = 0;
	if (!dst || !src)
		return (NULL);
	while (src[index] != 0)
	{
		dst[index] = src[index];
		index += 1;
	}
	dst[index] = 0;
	return (dst);
}
