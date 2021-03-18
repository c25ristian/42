/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:26:48 by candrade          #+#    #+#             */
/*   Updated: 2021/03/08 18:24:31 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int j;

	i = 0;
	while(i < size)
	{	
		j = i + 1;
		while(j < size)
		{	
			if(tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	int size;
	int tab[] = {2,1,8,5,3,7};
	int i;
	char c;

	i = 0;
	size = 6,
	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}
