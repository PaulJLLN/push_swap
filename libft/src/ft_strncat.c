/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:14:20 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/02 10:33:50 by pauljull         ###   ########.fr       */
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
