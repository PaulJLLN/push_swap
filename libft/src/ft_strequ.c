/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:19:30 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:20:32 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	index;

	index = 0;
	if ((!s1 || !s2) && s1 != s2)
		return (0);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[index] != 0 && s2[index] != 0)
		{
			if (s1[index] != s2[index])
				return (0);
			index += 1;
		}
	}
	if ((s1 == NULL && s2 == NULL) || (s1[index] == 0 && s2[index] == 0))
		return (1);
	return (0);
}
