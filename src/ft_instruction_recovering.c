/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_recovering.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:01:47 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/11 15:32:51 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
long			ft_read(t_list **list, int fd)
{
	char		buffer[BUFF_SIZE + 1];
	int			res;

	res = read(fd, buffer, BUFF_SIZE);
	if (res < 0)
		return (ERROR_PARSE_LONG);
	if (res == 0)
		return (VALID_PARSE_LONG);
	if (ft_strchr(buffer, '\n') == NULL)
		return (ERROR_PARSE_LONG);
	ft_lst_push_back(list, ft_strcdup(buffer, '\n'), ft_strlen(buffer) - 1);
	while ((res = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[res] = 0;
		if (ft_strchr(buffer, '\n') == NULL)
			return (ERROR_PARSE_LONG);
		ft_lst_push_back(list, ft_strcdup(buffer, '\n'), ft_strlen(buffer) - 1);
	}
	return (VALID_PARSE_LONG);
}
*/

long			ft_read(t_list **list, int fd)
{
	char		*inst;
	char		*tmp;
	char		buffer[BUFF_SIZE + 1];
	int			ret;
	
	tmp = NULL;
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = 0;
		tmp = ft_strjoinf(tmp, buffer, 0);
		while (ft_strchr(tmp, '\n') != NULL)
		{
			inst = ft_strpdupf(tmp, '\n', &tmp);
			ft_lst_push_back(list, inst, ft_strlen(inst));
		}
	}
	if (tmp != NULL)
		return (ERROR_PARSE_LONG);
	return (VALID_PARSE_LONG);
}

t_list *ft_instruction_recovering(int fd)
{
	t_list	*list;

	list = NULL;
	if (ft_read(&list, fd) == ERROR_PARSE_LONG)
		return (NULL);
	if (!list)
	{
		if (!(list = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		ft_lst_push_back(&list, "", 1);
	}
	else if (ft_instruction_validity_checking(list) == ERROR_PARSE_LONG)
		return (NULL);
	return (list);
}
