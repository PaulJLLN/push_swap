/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_leaks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:32:09 by paul              #+#    #+#             */
/*   Updated: 2019/12/06 19:32:38 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include “../includes/push_swap.h”

void ft_get_leaks(char *prog_name, char *msg)
{
	char *cmd;

	cmd = ft_strdup(“leaks “);
	cmd = ft_strjoinf(cmd, prog_name, 1);
	cmd = ft_strjoinf(cmd, ” | grep ‘total leaked bytes’“, 1);
	ft_putchar(‘\n’);
	ft_putstr(msg);
	ft_putchar(‘\n’);
	system(cmd);
	free(cmd);
}