/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_higher_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:06:00 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:07 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_higher_value(int a, int b, int c)
{
	int sup;

	sup = (a > b ? a : b);
	sup = (sup > c ? sup : c);
	return (sup);
}