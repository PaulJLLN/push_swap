/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:05:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:07 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long			ft_auth_char(char c)
{
	if ((c < '0' || c > '9') && c != ' ' && c != '\f'
	&& c != '\t' && c != '\n' && c != '\r' && c != '\v' &&
	c != '+' && c != '-' && c != '*' && c != '/' && c != '%'
	&& c != ')' && c != '(')
		return (L_FALSE);
	return (L_TRUE);
}

long			ft_integer_value_checker(t_arithm arithm)
{
	if (arithm.first_operand > INT_MAX || arithm.first_operand < INT_MIN)
		return (L_FALSE);
	if (arithm.second_operand > INT_MAX || arithm.second_operand < INT_MIN)
		return (L_FALSE);
	if (arithm.value > INT_MAX || arithm.value < INT_MIN)
		return (L_FALSE);
	return (L_TRUE);
}

void			ft_init_func_tab(t_func_tab func_tab[127])
{
	int			i;

	i = 0;
	while (i < 127)
	{
		if (i == '+')
			func_tab[i] = &ft_addition_func;
		else if (i == '-')
			func_tab[i] = &ft_substract_func;
		else if (i == '*')
			func_tab[i] = &ft_multiplication_func;
		else if (i == '/')
			func_tab[i] = &ft_division_func;
		else if (i == '%')
			func_tab[i] = &ft_modulo_func;
		else
			func_tab[i] = 0;
		i += 1;
	}
}

long			ft_expr_format_check(char *s)
{
	ft_skip_whitespace(&s);
	if (*s != 0 && ft_auth_char(*s) == L_FALSE)
		return (L_FALSE);
	if (*s != 0 && *s == '(' && (ft_is_whitespace(s[1]) ||
	ft_is_number(s[1]) || s[1] == '('))
		return (ft_expr_format_check(s + 1));
	while (*s != 0 && *s >= '0' && *s <= '9')
		s += 1;
	ft_skip_whitespace(&s);
	if (*s != 0 && ft_is_operator(*s) && (ft_is_whitespace(s[1]) ||
	ft_is_number(s[1]) || s[1] == '('))
		return (ft_expr_format_check(s + 1));
	if (*s != 0 && *s != ')')
		return (L_FALSE);
	return (L_TRUE);
}

long			ft_eval_expr(char *s)
{
	t_arithm	arithm;

	(void)s;
	return (arithm.value);
}
