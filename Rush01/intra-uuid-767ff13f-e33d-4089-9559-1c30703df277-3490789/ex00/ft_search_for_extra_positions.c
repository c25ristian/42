/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_for_extra_positions.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:30:18 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 20:26:52 by jramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_three_one_third_twos(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '1' && tabla[3][j] == '3')
	{
		tabla[2][j] = '1';
		tabla[1][j] = '2';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '1' && tabla[2][j] == '3')
	{
		tabla[3][j] = '1';
		tabla[4][j] = '2';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '1' && tabla[i][3] == '3')
	{
		tabla[i][2] = '1';
		tabla[i][1] = '2';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '1' && tabla[i][2] == '3')
	{
		tabla[i][3] = '1';
		tabla[i][4] = '2';
	}
}

void	ft_search_three_one_third_threes(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '3' && tabla[5][j] == '1' && tabla[3][j] == '2')
	{
		tabla[2][j] = '3';
		tabla[1][j] = '1';
	}
	if (tabla[5][j] == '3' && tabla[0][j] == '1' && tabla[2][j] == '2')
	{
		tabla[3][j] = '3';
		tabla[4][j] = '1';
	}
	if (tabla[i][0] == '3' && tabla[i][5] == '1' && tabla[i][3] == '2')
	{
		tabla[i][2] = '3';
		tabla[i][1] = '1';
	}
	if (tabla[i][5] == '3' && tabla[i][0] == '1' && tabla[i][2] == '2')
	{
		tabla[i][3] = '3';
		tabla[i][4] = '1';
	}
}

void	ft_search_combs_three_one_three_two(char tabla[6][6])
{
	while (tabla[0][1] == '3' && tabla[5][1] == '1')
	{
		if (tabla[2][0] == '3' && tabla[2][5] == '2')
			tabla[2][1] = '1';
	}
	while (tabla[0][2] == '3' && tabla[5][2] == '1')
	{
		if (tabla[1][0] == '3' && tabla[1][5] == '2')
			tabla[1][2] = '2';
		if (tabla[2][0] == '2' && tabla[2][5] == '1')
			tabla[2][2] = '1';
		if (tabla[2][0] == '3' && tabla[2][5] == '2')
			tabla[2][2] = '3';
		if (tabla[2][0] == '2' && tabla[2][5] == '2')
			tabla[2][2] = '1';
	}
}

void	ft_search_combs_three_one_three_two2(char tabla[6][6])
{
	while (tabla[5][1] == '3' && tabla[0][1] == '1')
	{
		if (tabla[3][0] == '3' && tabla[3][5] == '2')
			tabla[3][1] = '1';
	}
	while (tabla[5][2] == '3' && tabla[0][2] == '1')
	{
		if (tabla[4][0] == '3' && tabla[4][5] == '2')
			tabla[4][2] = '2';
		if (tabla[3][0] == '2' && tabla[3][5] == '1')
			tabla[3][2] = '1';
		if (tabla[3][0] == '3' && tabla[3][5] == '2')
			tabla[3][2] = '3';
		if (tabla[3][0] == '2' && tabla[3][5] == '2')
			tabla[3][2] = '1';
	}
}

void	ft_search_combs_three_one_three_two3(char tabla[6][6])
{
	while (tabla[4][5] == '3' && tabla[4][0] == '1')
	{
		if (tabla[5][3] == '3' && tabla[0][3] == '2')
			tabla[4][3] = '1';
	}
	while (tabla[3][5] == '3' && tabla[3][0] == '1')
	{
		if (tabla[5][4] == '3' && tabla[0][4] == '2')
			tabla[3][4] = '2';
		if (tabla[5][3] == '2' && tabla[0][3] == '1')
			tabla[3][3] = '1';
		if (tabla[5][3] == '3' && tabla[0][3] == '2')
			tabla[3][3] = '3';
		if (tabla[5][3] == '2' && tabla[0][3] == '2')
			tabla[3][3] = '1';
	}
}
