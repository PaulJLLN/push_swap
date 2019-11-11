/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:50:43 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:13:20 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	ft_free_array(char **array)
{
	size_t	idx;

	idx = 0;
	if (!array)
		return ;
	while (array[idx] != NULL)
		free(array[idx++]);
	free(array);
}
