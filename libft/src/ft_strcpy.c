/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:52:19 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/20 14:43:47 by pauljull         ###   ########.fr       */
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
