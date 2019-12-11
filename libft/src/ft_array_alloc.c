/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:04:39 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:06 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	**ft_array_alloc(int len)
{
	char	**array;

	array = NULL;
	if (len == 0)
		return (NULL);
	if (len != 0 && !(array = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	array[len] = NULL;
	ft_array_init(array, len);
	return (array);
}
