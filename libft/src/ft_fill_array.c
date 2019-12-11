/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:05:48 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:07 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdarg.h>
#include <stdlib.h>

char	**ft_fill_array(size_t len, ...)
{
	char	**array;
	char	*tmp;
	size_t	idx;
	va_list	arg;
	size_t	s_len;

	va_start(arg, len);
	idx = 0;
	if (!(array = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (idx < len)
	{
		tmp = va_arg(arg, char *);
		s_len = ft_strlen(tmp);
		if (!(array[idx] = (char *)malloc(sizeof(char) * s_len)))
			return (NULL);
		ft_strcpy(array[idx], tmp);
		array[idx][s_len] = 0;
		idx += 1;
	}
	va_end(arg);
	array[len] = NULL;
	return (array);
}
