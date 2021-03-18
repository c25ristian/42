/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_towers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:19:30 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 19:46:32 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search_same_row(int i, char tab[6][6]);
int		ft_search_same_col(int j, char tab[6][6]);
int ft_lines_insert(int i, int j, int sum, int cont, int pos, char tabla[6][6]);

void	ft_insert_complete_lines(char tabla[6][6])
{
	int	i;
	int	j;
	int	sum;
	int	cont;
	int	pos;

	i = 1;
	pos = 0;
	while (i < 5)
	{
		cont = ft_search_same_row(i, tabla);
		if (cont == 3)
		{
			j = 1;
			sum = 202;
			while (j < 5)
			{
				if (tabla[i][j] != '0')
					sum = sum - tabla[i][j];
				else
					pos = j;
				j++;
			}
			tabla[i][pos] = sum;
		}
		i++;
	}
	ft_lines_insert(i, j, sum, cont, pos, tabla);
}
	
int	ft_lines_insert(int i, int j, int sum, int cont,  int pos, char tabla[6][6])
{
	j =1;
	while (j < 5)
	{
		cont = ft_search_same_col(i, tabla);
		if (cont == 3)
		{
			 i = 1;
			 sum = 202;
			 while (i < 5)
			 {
			 	if (tabla[i][j] != '0')
					sum = sum - tabla[i][j];
				else
					pos = i;
				i++;
			 }
			 tabla[pos][i] = sum;
		}
		j++;
	}
	return (cont);
}	

