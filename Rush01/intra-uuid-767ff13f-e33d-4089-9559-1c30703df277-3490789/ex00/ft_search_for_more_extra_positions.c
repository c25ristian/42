/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_for_more_extra_positions.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:30:18 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 21:20:02 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_combs_three_one_three_two4(char tabla[6][6])
{
	if (tabla[4][0] == '3' && tabla[4][5] == '1')
	{
		if (tabla[5][2] == '3' && tabla[0][2] == '2')
			tabla[4][2] = '1';
	}
	if (tabla[3][0] == '3' && tabla[3][5] == '1')
	{
		if (tabla[5][1] == '3' && tabla[0][1] == '2')
			tabla[3][1] = '2';
		if (tabla[5][2] == '2' && tabla[0][2] == '1')
			tabla[3][2] = '1';
		if (tabla[5][2] == '3' && tabla[0][2] == '2')
			tabla[3][2] = '3';
		if (tabla[5][2] == '2' && tabla[0][2] == '2')
			tabla[3][2] = '1';
	}
}

void	ft_search_combs_three_one_three_two5(char tabla[6][6])
{
	if (tabla[1][0] == '3' && tabla[1][5] == '1')
	{
		if (tabla[0][2] == '3' && tabla[5][2] == '2')
			tabla[1][2] = '1';
	}
	if (tabla[2][0] == '3' && tabla[2][5] == '1')
	{
		if (tabla[0][1] == '3' && tabla[5][1] == '2')
			tabla[2][1] = '2';
		if (tabla[0][2] == '2' && tabla[5][2] == '1')
			tabla[2][2] = '1';
		if (tabla[0][2] == '3' && tabla[5][2] == '2')
			tabla[2][2] = '3';
		if (tabla[0][2] == '2' && tabla[5][2] == '2')
			tabla[2][2] = '1';
	}
}

void	ft_search_combs_three_one_three_two6(char tabla[6][6])
{
	if (tabla[1][5] == '3' && tabla[1][0] == '1')
	{
		if (tabla[0][3] == '3' && tabla[5][3] == '2')
			tabla[1][3] = '1';
	}
	if (tabla[2][5] == '3' && tabla[2][0] == '1')
	{
		if (tabla[0][4] == '3' && tabla[5][4] == '2')
			tabla[2][4] = '2';
		if (tabla[0][3] == '2' && tabla[5][3] == '1')
			tabla[2][3] = '1';
		if (tabla[0][3] == '3' && tabla[5][3] == '2')
			tabla[2][3] = '3';
		if (tabla[0][3] == '2' && tabla[5][3] == '2')
			tabla[2][3] = '1';
	}
}

void	ft_search_combs_three_one_three_two7(char tabla[6][6])
{
	if (tabla[0][4] == '3' && tabla[5][4] == '1')
	{
		if (tabla[2][5] == '3' && tabla[2][0] == '2')
			tabla[2][4] = '1';
	}
	if (tabla[0][3] == '3' && tabla[5][3] == '1')
	{
		if (tabla[1][5] == '3' && tabla[1][0] == '2')
			tabla[1][3] = '2';
		if (tabla[2][5] == '2' && tabla[2][0] == '1')
			tabla[2][3] = '1';
		if (tabla[2][5] == '3' && tabla[2][0] == '2')
			tabla[2][3] = '3';
		if (tabla[2][5] == '2' && tabla[2][0] == '2')
			tabla[2][3] = '1';
	}
}

void	ft_search_combs_three_one_three_two8(char tabla[6][6])
{
	if (tabla[5][4] == '3' && tabla[0][4] == '1')
	{
		if (tabla[3][5] == '3' && tabla[3][0] == '2')
			tabla[3][4] = '1';
	}
	if (tabla[5][3] == '3' && tabla[0][3] == '1')
	{
		if (tabla[4][5] == '3' && tabla[4][0] == '2')
			tabla[4][3] = '2';
		if (tabla[3][5] == '2' && tabla[3][0] == '1')
			tabla[3][3] = '1';
		if (tabla[3][5] == '3' && tabla[3][0] == '2')
			tabla[3][3] = '3';
		if (tabla[3][5] == '2' && tabla[3][0] == '2')
			tabla[3][3] = '1';
	}
}
