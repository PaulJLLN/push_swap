/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:11:00 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:11:03 by cghanime         ###   ########.fr       */
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
