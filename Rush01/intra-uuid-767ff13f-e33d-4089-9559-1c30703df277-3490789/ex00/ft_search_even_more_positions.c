/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_even_more_positions.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:30:18 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 14:13:11 by jramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_three_two_first(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '2' && tabla[1][j] == '2')
	{
		tabla[2][j] = '3';
		tabla[4][j] = '1';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '2' && tabla[4][j] == '2')
	{
		tabla[3][j] = '3';
		tabla[1][j] = '1';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '2' && tabla[i][1] == '2')
	{
		tabla[i][2] = '3';
		tabla[i][4] = '1';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '2' && tabla[i][4] == '2')
	{
		tabla[i][3] = '3';
		tabla[i][1] = '1';
	}
}

void	ft_search_three_two_second(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '2' && tabla[2][j] == '2')
	{
		tabla[4][j] = '3';
		tabla[1][j] = '1';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '2' && tabla[3][j] == '2')
	{
		tabla[1][j] = '3';
		tabla[4][j] = '1';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '2' && tabla[i][2] == '2')
	{
		tabla[i][4] = '3';
		tabla[i][1] = '1';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '2' && tabla[i][3] == '2')
	{
		tabla[i][1] = '3';
		tabla[i][4] = '1';
	}
}

void	ft_search_three_two_third(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '2' && tabla[4][j] == '2')
	{
		tabla[2][j] = '3';
		tabla[1][j] = '1';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '2' && tabla[1][j] == '2')
	{
		tabla[3][j] = '3';
		tabla[4][j] = '1';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '2' && tabla[i][4] == '2')
	{
		tabla[i][2] = '3';
		tabla[i][1] = '1';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '2' && tabla[i][1] == '2')
	{
		tabla[i][3] = '3';
		tabla[i][4] = '1';
	}
}

void	ft_search_three_two_ones(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '2' && tabla[4][j] == '1')
	{
		tabla[2][j] = '3';
		tabla[1][j] = '2';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '2' && tabla[1][j] == '1')
	{
		tabla[3][j] = '3';
		tabla[4][j] = '2';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '2' && tabla[i][4] == '1')
	{
		tabla[i][2] = '3';
		tabla[i][1] = '2';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '2' && tabla[i][1] == '1')
	{
		tabla[i][3] = '3';
		tabla[i][4] = '2';
	}
}

void	ft_search_three_two_threes(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '2' && tabla[4][j] == '3')
	{
		tabla[2][j] = '2';
		tabla[1][j] = '1';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '2' && tabla[1][j] == '3')
	{
		tabla[3][j] = '2';
		tabla[4][j] = '1';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '2' && tabla[i][4] == '3')
	{
		tabla[i][2] = '2';
		tabla[i][1] = '1';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '2' && tabla[i][1] == '3')
	{
		tabla[i][3] = '2';
		tabla[i][4] = '1';
	}
}
