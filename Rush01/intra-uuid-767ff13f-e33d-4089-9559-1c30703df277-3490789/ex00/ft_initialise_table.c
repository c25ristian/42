/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise_table.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:50:50 by jramirez          #+#    #+#             */
/*   Updated: 2021/03/08 12:22:12 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_fill_with_zeros(char tab[][6]);
void	ft_print_table(char	tabla[][6]);

int		ft_initialise_table(char *str, char tab[6][6])
{
	int		i;
	int		j;

	i = 0;
	while (i < 31)
	{
		j = 1;
		while (j < 5)
		{
			if (*(str + i) < '1' || *(str + i) > '4')
				write(1, "Input error, the solution would be: \n", 37);
			if (i >= 0 && i < 8)
				tab[0][j] = *(str + i);
			else if (i > 7 && i < 16)
				tab[5][j] = *(str + i);
			else if (i > 15 && i < 24)
				tab[j][0] = *(str + i);
			else if (i > 23 && i < 31)
				tab[j][5] = *(str + i);
			j++;
			i = i + 2;
		}
	}
	ft_fill_with_zeros(tab);
	return (0);
}

void	ft_fill_with_zeros(char tab[][6])
{
	int		i;
	int		j;

	tab[0][0] = '0';
	tab[0][5] = '0';
	tab[5][0] = '0';
	tab[5][5] = '0';
	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
}
