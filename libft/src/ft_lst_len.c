/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:44:41 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/26 15:52:05 by pauljull         ###   ########.fr       */
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
