/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cormen_sort_algo_implementation.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:56:59 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/18 10:57:13 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

void	insertion_sort(int *tab, int len)
{
	int j;
	int i;
	int key;

	j = 0;
	while (j < len)
	{
		key = tab[j];
		i = j - 1;
		while (i >= 0 && tab[i] > key)
		{
			tab[i + 1] = tab[i];
			i -= 1;
		}
		tab[i + 1] = key;
		j += 1;
	}
	j = 0;
	while (j < len)
		printf("%d ", tab[j++]);
}

void	selection_sort(int *tab, int len)
{
	int i;
	int j;
	int k;
	int key;

	i = 0;
	while (i < len - 1)
	{
		key = tab[i];
		j = i + 1;
		while (j < len)
		{
			if(key > tab[j])
			{
				k = j;
				key = tab[j];
			}
			j += 1;
		}
		tab[k] = tab[i];
		tab[i] = key;
		i += 1;
	}
	j = 0;
	while (j < len)
		printf("%d ", tab[j++]);
}

void	DaC_insert(int *tab, int n, int x)
{
	int i;

	i = n - 1;
	while (i >= 0 && tab[i] > x)
	{
		tab[i + 1] = tab[i];
		i -= 1;
	}
	tab[i + 1] = x;
}

int	*DaC_insertion_sort(int *tab, int n)
{
	if (n > 1)
		tab = DaC_insertion_sort(tab, n - 1);
	DaC_insert(tab, n, tab[n]);
	return (tab);
}

void	merge_sort(int *tab, int start, int q,int end)
{
	int n1;
	int n2;
	int i;
	int j;
	int k;
	int *tab_left;
	int *tab_right;

	i = 0;
	j = 0;
	n1 = q - start;
	n2 = end - q;
	printf("N1 = %d\nN2 = %d\nStart = %d\nEnd = %d\nq= %d\n\n", n1,n2,start,end,q);
	tab_left = tab + start;
	tab_right = tab + q + 1;
	i = 0;
	j = 0;
	k = start;
	while (k < end)
	{
		printf("tab_l = %d\ntab_r = %d\n", tab_left[i], tab_right[j]);
		if (tab_left[i] <= tab_right[j])
		{
			tab[k] = tab_left[i];
			i = i + 1;
		}
		else
		{
			tab[k] = tab_right[j];
			j = j + 1;
		}
		k += 1;
	}
}

int *DaC_merge(int *tab, int start, int end)
{
	int q;

	if (end > start)
	{
		printf("Start = %d\nEnd = %d\n\n", start, end);
		q = (end - start) / 2;
		tab = DaC_merge(tab, start, q);
//		tab = DaC_merge(tab, q + 1, end);
		merge_sort(tab, start, q, end);
	}
	return (tab);
}

int main(int ac, char **av)
{
	int key;
	int i;
	int j;
	int *tab;

	i = 1;
	if (!(tab = (int *)malloc(sizeof(int) * (ac - 1))))
		return (0);
	while (i < ac)
	{
		tab[i - 1] = atoi(av[i]);
		i += 1;
	}
//	insertion_sort(tab, ac - 1);
//	selection_sort(tab, ac - 1);
//	DaC_insertion_sort(tab, ac - 2);
	DaC_merge(tab, 0, ac - 2);
	j = 0;
	while (j < ac - 1)
		printf("%d ", tab[j++]);
	return (0);
}