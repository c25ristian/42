/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_towers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:19:30 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 19:41:33 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_search_row_column_number_of_numbers(char tab[6][6], char numbers);
void	ft_insert_searched_numbers(char tab[6][6], char numbers);
int	ft_search_same_row(int i, char tab[6][6]);
int	ft_search_same_col(int j, char tab[6][6]);
void	ft_insert_complete_lines(char tab[6][6]);

void	ft_check_towers(char tabla[6][6])
{
	int cont;
	char	numbers;

	numbers = '1';
	while (numbers < '5')
	{
		cont = ft_search_row_column_number_of_numbers(tabla, numbers);
		if (cont == 3)
			ft_insert_searched_numbers(tabla, numbers);
		numbers++;
	}
	ft_insert_complete_lines(tabla);
}

int	ft_search_row_column_number_of_numbers(char tab[6][6], char numbers)
{
	int i;
	int j;
	int cont;

	i = 1;
	j = 1;
	cont = 0;
	while (i < 5)
	{
		while (j < 5)
		{
			if (tab[i][j] == numbers)
				cont++;
			j++;
		}
		j = 1;
		i++;
	}
	return (cont);
}

void	ft_insert_searched_numbers(char tabla[6][6], char numbers)
{
	int	i;
	int	j;
	int	row;
	int	col;
	int	encontrado;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			encontrado = 0;
			if (tabla[i][j] == '0')
			{
				row = 1;
				col = 1;
				while (row < 5)
				{
					if (tabla[i][row] == numbers)
						encontrado = 1;	
					row++;
				}
				while (col < 5)
				{
					if (tabla[col][j] == numbers)
						encontrado = 1;							
					col++;
				}
				if (encontrado == 0)
					tabla[i][j] = numbers;
			}
			j++;
		}
		j = 1;
		i++;
	}
}

int	ft_search_same_row(int i, char tabla[6][6])
{
	int	j;
	int	cont;

	j = 1;
	cont = 0;
	while (j < 5)
	{
		if (tabla[i][j] != '0')
			cont++;
		j++;
	}
	j = 1;
	return (cont);
}

int	ft_search_same_col(int j, char tabla[6][6])
{
	int	i;
	int	cont;

	i = 1;
	cont = 0;
	while (i < 5)
	{
		if (tabla[i][j] != '0')
			cont++;
		i++;
	}
	i = 1;
	return (cont);
}
