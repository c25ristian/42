/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:57:21 by candrade          #+#    #+#             */
/*   Updated: 2021/03/08 16:25:44 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int i;

	i = 0;
	while (i < size / 2)
	{
		a = tab[i];
		tab[i] = tab[size - 1 -i];
		tab[size - 1 -i] = a;
		i++;
	}
}

int	main()
{
	int size;
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int i;
	char c;

	i = 0;
	size = 8;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}
