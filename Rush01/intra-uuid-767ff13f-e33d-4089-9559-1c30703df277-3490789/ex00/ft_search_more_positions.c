/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_more_positions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:30:18 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 18:05:18 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_more_positions(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '2')
		tabla[3][j] = '4';
	if (tabla[0][j] == '2' && tabla[5][j] == '3')
		tabla[2][j] = '4';
	if (tabla[i][0] == '3' && tabla[i][5] == '2')
		tabla[i][3] = '4';
	if (tabla[i][0] == '2' && tabla[i][5] == '3')
		tabla[i][2] = '4';
}

void	ft_search_three_one_first(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '1' && tabla[1][j] == '1')
	{
		tabla[2][j] = '3';
		tabla[3][j] = '2';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '1' && tabla[4][j] == '1')
	{
		tabla[3][j] = '3';
		tabla[2][j] = '2';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '1' && tabla[i][1] == '1')
	{
		tabla[i][2] = '3';
		tabla[i][3] = '2';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '1' && tabla[i][4] == '1')
	{
		tabla[i][3] = '3';
		tabla[i][2] = '2';
	}
}

void	ft_search_three_one_second(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '1' && tabla[2][j] == '1')
	{
		tabla[3][j] = '3';
		tabla[1][j] = '2';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '1' && tabla[3][j] == '1')
	{
		tabla[2][j] = '3';
		tabla[4][j] = '2';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '1' && tabla[i][2] == '1')
	{
		tabla[i][3] = '3';
		tabla[i][1] = '2';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '1' && tabla[i][3] == '1')
	{
		tabla[i][2] = '3';
		tabla[i][4] = '2';
	}
}

void	ft_search_three_one_third(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '1' && tabla[3][j] == '1')
	{
		tabla[2][j] = '3';
		tabla[1][j] = '2';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '1' && tabla[2][j] == '1')
	{
		tabla[3][j] = '3';
		tabla[4][j] = '2';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '1' && tabla[i][3] == '1')
	{
		tabla[i][2] = '3';
		tabla[i][1] = '2';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '1' && tabla[i][2] == '1')
	{
		tabla[i][3] = '3';
		tabla[i][4] = '2';
	}
}
