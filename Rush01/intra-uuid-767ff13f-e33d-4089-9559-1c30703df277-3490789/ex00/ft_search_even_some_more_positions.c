/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_even_some_more_positions.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:30:18 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 15:54:20 by jramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_two_two_first(int j, char tabla[6][6])
{
	if (tabla[0][j] == '2' && tabla[5][j] == '2' && tabla[3][j] == '4')
	{
		if (tabla[1][j] == '2')
		{
			tabla[2][j] = '1';
			tabla[4][j] = '3';
		}
		if (tabla[2][j] == '2')
		{
			tabla[4][j] = '1';
			tabla[1][j] = '3';
		}
		if (tabla[4][j] == '2')
		{
			tabla[1][j] = '3';
			tabla[2][j] = '1';
		}
		if (tabla[4][j] == '1')
		{
			tabla[1][j] = '3';
			tabla[2][j] = '2';
		}
		if (tabla[4][j] == '3')
		{
			tabla[1][j] = '2';
			tabla[2][j] = '1';
		}
	}
}

void	ft_search_two_two_first_sim(int j, char tabla[6][6])
{
	if (tabla[0][j] == '2' && tabla[5][j] == '2' && tabla[2][j] == '4')
	{
		if (tabla[1][j] == '2')
		{
			tabla[3][j] = '1';
			tabla[4][j] = '3';
		}
		if (tabla[3][j] == '2')
		{
			tabla[4][j] = '3';
			tabla[1][j] = '1';
		}
		if (tabla[4][j] == '2')
		{
			tabla[1][j] = '3';
			tabla[3][j] = '1';
		}
		if (tabla[1][j] == '1')
		{
			tabla[4][j] = '3';
			tabla[3][j] = '2';
		}
		if (tabla[1][j] == '3')
		{
			tabla[4][j] = '2';
			tabla[3][j] = '1';
		}
	}
}

void	ft_search_two_two_second_sim(int i, char tabla[6][6])
{
	if (tabla[i][0] == '2' && tabla[i][5] == '2' && tabla[i][2] == '4')
	{
		if (tabla[i][1] == '2')
		{
			tabla[i][3] = '1';
			tabla[i][4] = '3';
		}
		if (tabla[i][3] == '2')
		{
			tabla[i][4] = '3';
			tabla[i][1] = '1';
		}
		if (tabla[i][4] == '2')
		{
			tabla[i][1] = '3';
			tabla[i][3] = '1';
		}
		if (tabla[i][1] == '1')
		{
			tabla[i][4] = '3';
			tabla[i][3] = '2';
		}
		if (tabla[i][1] == '3')
		{
			tabla[i][4] = '2';
			tabla[i][3] = '1';
		}
	}
}

void	ft_search_two_two_second(int i, char tabla[6][6])
{
	if (tabla[i][0] == '2' && tabla[i][5] == '2' && tabla[i][3] == '4')
	{
		if (tabla[i][1] == '2')
		{
			tabla[i][2] = '1';
			tabla[i][4] = '3';
		}
		if (tabla[i][2] == '2')
		{
			tabla[i][4] = '1';
			tabla[i][1] = '3';
		}
		if (tabla[i][4] == '2')
		{
			tabla[i][1] = '3';
			tabla[i][2] = '1';
		}
		if (tabla[i][4] == '1')
		{
			tabla[i][1] = '3';
			tabla[i][2] = '2';
		}
		if (tabla[i][4] == '3')
		{
			tabla[i][1] = '2';
			tabla[i][2] = '1';
		}
	}
}
