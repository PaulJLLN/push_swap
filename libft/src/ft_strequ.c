/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:33:29 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/02 10:33:50 by pauljull         ###   ########.fr       */
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
