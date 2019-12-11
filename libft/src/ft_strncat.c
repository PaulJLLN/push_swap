/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:20:06 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:20:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	index = 0;
	while (index < n && s2[index] != 0)
	{
		s1[s1_len + index] = s2[index];
		index += 1;
	}
	s1[index + s1_len] = 0;
	return (s1);
}
