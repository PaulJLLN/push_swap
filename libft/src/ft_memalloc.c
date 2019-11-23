/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:47:43 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/13 11:12:16 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t len)
{
	void	*mem;
	int		i;

	if (!(mem = malloc(len)))
		return (NULL);
	i = 0;
	ft_memset(mem, 0, len);
	return (mem);
}
