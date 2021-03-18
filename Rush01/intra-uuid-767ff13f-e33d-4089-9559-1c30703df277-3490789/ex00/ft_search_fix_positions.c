/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_fix_positions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:01:31 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/07 21:21:31 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_for_four_rows(int j, char tabla[6][6]);
void	ft_search_for_four_columns(int i, char tabla[6][6]);
void	ft_search_for_two_one(int i, int j, char tabla[6][6]);
void	ft_search_for_one(int i, int j, char tabla[6][6]);
void	ft_search_more_positions(int i, int j, char tabla[6][6]);
void	ft_search_three_one_first(int i, int j, char tabla[6][6]);
void	ft_search_three_one_second(int i, int j, char tabla[6][6]);
void	ft_search_three_one_third(int i, int j, char tabla[6][6]);
void	ft_search_three_one_third_twos(int i, int j, char tabla[6][6]);
void	ft_search_three_one_third_threes(int i, int j, char tabla[6][6]);
void	ft_search_three_two_first(int i, int j, char tabla[6][6]);
void	ft_search_three_two_second(int i, int j, char tabla[6][6]);
void	ft_search_three_two_third(int i, int j, char tabla[6][6]);
void	ft_search_three_two_ones(int i, int j, char tabla[6][6]);
void	ft_search_three_two_threes(int i, int j, char tabla[6][6]);
void	ft_search_two_two_first(int j, char tabla[6][6]);
void	ft_search_two_two_first_sim(int j, char tabla[6][6]);
void	ft_search_two_two_second(int i, char tabla[6][6]);
void	ft_search_two_two_second_sim(int i, char tabla[6][6]);
/*void	ft_search_combs_three_one_three_two(int i, int j, char tabla[6][6]);
void	ft_search_combs_three_one_three_two2(int i, int j, char tabla[6][6]);
void	ft_search_combs_three_one_three_two3(int i, int j, char tabla[6][6]);
*/void	ft_search_combs_three_one_three_two4(char tabla[6][6]);
void	ft_search_combs_three_one_three_two5(char tabla[6][6]);
void	ft_search_combs_three_one_three_two6(char tabla[6][6]);
void	ft_search_combs_three_one_three_two7(char tabla[6][6]);
void	ft_search_combs_three_one_three_two8(char tabla[6][6]);
/*void	ft_search_combs_last_one(int i, int j, char tabla[6][6]);
void	ft_search_combs_last_one2(int i, int j, char tabla[6][6]);
void	ft_search_combs_last_one3(int i, int j, char tabla[6][6]);
void	ft_search_combs_last_one4(int i, int j, char tabla[6][6]);
*/void	ft_search_combs_last_one5(char tabla[6][6]);
void	ft_search_combs_last_one6(char tabla[6][6]);
void	ft_search_combs_last_one7(char tabla[6][6]);
void	ft_search_combs_last_one8(char tabla[6][6]);

void	ft_search_fix_positions(char tabla[6][6])
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			if (!((i > 0 && i < 5) && (j > 0 && j < 5)))
			{
				ft_search_for_four_rows(j, tabla);
				ft_search_for_four_columns(i, tabla);
				ft_search_for_one(i, j, tabla);
				ft_search_for_two_one(i, j, tabla);
				ft_search_more_positions(i, j, tabla);
				ft_search_three_one_first(i, j, tabla);
				ft_search_three_one_second(i, j, tabla);
				ft_search_three_one_third(i, j, tabla);
				ft_search_three_one_third_twos(i, j, tabla);
				ft_search_three_one_third_threes(i, j, tabla);
				ft_search_three_two_first(i, j, tabla);
				ft_search_three_two_second(i, j, tabla);
				ft_search_three_two_third(i, j, tabla);
				ft_search_three_two_ones(i, j, tabla);
				ft_search_three_two_threes(i, j, tabla);
				ft_search_two_two_first(j, tabla);
				ft_search_two_two_first_sim(j, tabla);
				ft_search_two_two_second(i, tabla);
				ft_search_two_two_second_sim(i, tabla);
/*				ft_search_combs_three_one_three_two(i, j, tabla);
				ft_search_combs_three_one_three_two2(i, j, tabla);
				ft_search_combs_three_one_three_two3(i, j, tabla);
		*/		ft_search_combs_three_one_three_two4(tabla);
				ft_search_combs_three_one_three_two5(tabla);
				ft_search_combs_three_one_three_two6(tabla);
				ft_search_combs_three_one_three_two7(tabla);
				ft_search_combs_three_one_three_two8(tabla);
		/*		ft_search_combs_last_one(i, j, tabla);
				ft_search_combs_last_one2(i, j, tabla);
				ft_search_combs_last_one3(i, j, tabla);
				ft_search_combs_last_one4(i, j, tabla);
*/				ft_search_combs_last_one5(tabla);
				ft_search_combs_last_one6(tabla);
				ft_search_combs_last_one7(tabla);
				ft_search_combs_last_one8(tabla);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_search_for_four_rows(int j, char tabla[6][6])
{
	if (tabla[0][j] == '4')
	{
		tabla[1][j] = '1';
		tabla[2][j] = '2';
		tabla[3][j] = '3';
		tabla[4][j] = '4';
	}
	if (tabla[5][j] == '4')
	{
		tabla[4][j] = '1';
		tabla[3][j] = '2';
		tabla[2][j] = '3';
		tabla[1][j] = '4';
	}
}

void	ft_search_for_four_columns(int i, char tabla[6][6])
{
	if (tabla[i][0] == '4')
	{
		tabla[i][1] = '1';
		tabla[i][2] = '2';
		tabla[i][3] = '3';
		tabla[i][4] = '4';
	}
	if (tabla[i][5] == '4')
	{
		tabla[i][4] = '1';
		tabla[i][3] = '2';
		tabla[i][2] = '3';
		tabla[i][1] = '4';
	}
}

void	ft_search_for_one(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '1')
		tabla[1][j] = '4';
	if (tabla[5][j] == '1')
		tabla[4][j] = '4';
	if (tabla[i][0] == '1')
		tabla[i][1] = '4';
	if (tabla[i][5] == '1')
		tabla[i][4] = '4';
}

void	ft_search_for_two_one(int i, int j, char tabla[6][6])
{
	if (tabla[0][j] == '1' && tabla[5][j] == '2')
		tabla[4][j] = '3';
	if (tabla[5][j] == '1' && tabla[0][j] == '2')
		tabla[1][j] = '3';
	if (tabla[i][0] == '1' && tabla[i][5] == '2')
		tabla[i][4] = '3';
	if (tabla[i][5] == '1' && tabla[i][0] == '2')
		tabla[i][1] = '3';
}
