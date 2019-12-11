/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:10:16 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:11:03 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_lst_len(t_list *head)
{
	int	len;

	len = 0;
	while (head)
	{
		len += 1;
		head = head->next;
	}
	return (len);
}
