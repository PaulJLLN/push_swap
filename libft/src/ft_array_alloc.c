/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 22:35:08 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/03 11:00:56 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

char	**ft_array_alloc(int len)
{
	char	**array;

	array = NULL;
	if (len != 0 && !(array = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	array[len] = NULL;
	ft_array_init(array, len);
	return (array);
}
