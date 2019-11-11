/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:52:30 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/26 21:49:01 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	unsigned int	index;
	unsigned int	length;
	char			*str;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	index = 0;
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (index < length)
	{
		str[index] = s[index];
		index += 1;
	}
	str[index] = 0;
	return (str);
}
