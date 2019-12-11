/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:17:46 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:17:50 by cghanime         ###   ########.fr       */
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
