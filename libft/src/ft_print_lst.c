/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 08:42:11 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:35:07 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "unistd.h"

void	ft_print_lst(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		write(1, lst->content, ft_strlen(lst->content));
		write(1, "\n", 1);
		lst = lst->next;
	}
}
