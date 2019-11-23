/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:06:57 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:34:19 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char		**ft_list_to_array(t_list *list)
{
	int		len;
	char	**array;

	if (!list)
		return (NULL);
	len = ft_lst_len(list) + 1;
	if (!(array = (char **)malloc(sizeof(char *) * len)))
		return (NULL);
	ft_array_init(array, len);
	while (list)
	{
		ft_array_add_element(array, list->content);
		list = list->next;
	}
	return (array);
}
