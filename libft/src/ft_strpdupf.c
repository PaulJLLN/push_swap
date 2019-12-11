/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpdupf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:20:30 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:20:34 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strpdupf(char *src, char c, char **rest)
{
	char	*result;
	char	*tmp;
	int		i;

	i = 0;
	result = ft_strcdup(src, c);
	while (src[i] != 0 && src[i] != c)
		i += 1;
	if (src[i] != 0 && src[i + 1] == 0)
	{
		free(*rest);
		*rest = NULL;
	}
	else if (src[i] != 0)
	{
		if (!(tmp = ft_strdup(src + i + 1)))
			return (NULL);
		free(*rest);
		*rest = tmp;
	}
	return (result);
}
