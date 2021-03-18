/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjara-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:28:51 by jjara-lo          #+#    #+#             */
/*   Updated: 2021/03/08 12:18:03 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_initialise_table(char *str, char tab[6][6]);
int		ft_search_fix_positions(char tab[6][6]);
int		ft_check_towers(char tab[6][6]);
int		ft_print_table(char tab[6][6]);

int		main(int argc, char *argv[])
{
	char	tab[6][6];
	int		i;

	argc = 0;
	i = 0;
	ft_initialise_table(argv[1], tab);
	while (i < 10)
	{
		ft_search_fix_positions(tab);
		ft_check_towers(tab);
		i++;
	}
	ft_print_table(tab);
	return (0);
}
