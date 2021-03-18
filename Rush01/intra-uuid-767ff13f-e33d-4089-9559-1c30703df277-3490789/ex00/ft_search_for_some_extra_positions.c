/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_more_positions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:30:18 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 20:27:41 by jramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_combs_last_one5(char tabla[6][6])
{
	while (tabla[0][3] == '3' && tabla[5][3] == '2')
	{
		if (tabla[2][5] == '2' && tabla[2][0] == '2')
			tabla[2][3] = '2';
		if (tabla[2][5] == '2' && tabla[2][0] == '1')
			tabla[2][3] = '2';
		if (tabla[3][5] == '2' && tabla[3][0] == '2')
			tabla[3][3] = '2';
		if (tabla[3][5] == '2' && tabla[3][0] == '1')
			tabla[3][3] = '2';
	}
	while (tabla[0][2] == '3' && tabla[5][2] == '2')
	{
		if (tabla[2][5] == '2' && tabla[2][0] == '2')
			tabla[2][2] = '2';
		if (tabla[2][5] == '2' && tabla[2][0] == '1')
			tabla[2][2] = '2';
	}
}

void	ft_search_combs_last_one6(char tabla[6][6])
{
	while (tabla[5][3] == '3' && tabla[0][3] == '2')
	{
		if (tabla[3][5] == '2' && tabla[3][0] == '2')
			tabla[3][3] = '2';
		if (tabla[3][5] == '2' && tabla[3][0] == '1')
			tabla[3][3] = '2';
		if (tabla[2][5] == '2' && tabla[2][0] == '2')
			tabla[2][3] = '2';
		if (tabla[2][5] == '2' && tabla[2][0] == '1')
			tabla[2][3] = '2';
	}
	while (tabla[5][2] == '3' && tabla[0][2] == '2')
	{
		if (tabla[3][5] == '2' && tabla[3][0] == '2')
			tabla[3][2] = '2';
		if (tabla[3][5] == '2' && tabla[3][0] == '1')
			tabla[3][2] = '2';
	}
}

void	ft_search_combs_last_one7(char tabla[6][6])
{
	while (tabla[3][0] == '3' && tabla[3][5] == '2')
	{
		if (tabla[5][2] == '2' && tabla[0][2] == '2')
			tabla[3][2] = '2';
		if (tabla[5][2] == '2' && tabla[0][2] == '1')
			tabla[3][2] = '2';
		if (tabla[5][3] == '2' && tabla[0][3] == '2')
			tabla[3][3] = '2';
		if (tabla[5][3] == '2' && tabla[0][3] == '1')
			tabla[3][3] = '2';
	}
	while (tabla[2][0] == '3' && tabla[2][5] == '2')
	{
		if (tabla[5][2] == '2' && tabla[0][2] == '2')
			tabla[2][2] = '2';
		if (tabla[5][2] == '2' && tabla[0][2] == '1')
			tabla[2][2] = '2';
	}
}
void	ft_search_combs_last_one8(char tabla[6][6])
{
	while (tabla[3][5] == '3' && tabla[3][0] == '2')
	{
		if (tabla[5][3] == '2' && tabla[0][3] == '2')
			tabla[3][3] = '2';
		if (tabla[5][3] == '2' && tabla[0][3] == '1')
			tabla[3][3] = '2';
		if (tabla[5][2] == '2' && tabla[0][2] == '2')
			tabla[3][2] = '2';
		if (tabla[5][2] == '2' && tabla[0][2] == '1')
			tabla[3][2] = '2';
	}
	while (tabla[2][5] == '3' && tabla[2][0] == '2')
	{
		if (tabla[5][3] == '2' && tabla[0][3] == '2')
			tabla[2][3] = '2';
		if (tabla[5][3] == '2' && tabla[0][3] == '1')
			tabla[2][3] = '2';
	}
}
