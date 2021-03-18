/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:33:54 by ialvarez          #+#    #+#             */
/*   Updated: 2021/03/17 16:12:15 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

int	main(int argc, char **argv)
{
	unsigned int a;
	unsigned int *arrow;

	arrow = &a;
	if (argc == 2)
	{
		if (atua(arrow, argv[1]) == 1 && a != 0)
			chop(a, aver("numbers.dict.txt"));
		else if (atua(arrow, argv[1]) == 0)
		
			chop(0, aver("numbers.dict.txt"));
		else
			write(1, "Error\n", 6);
	}
	else if (argc == 3)
	{
		if (atua(arrow, argv[2]) == 1 && a != 0)
			chop(a, aver(argv[1]));
		else if (atua(arrow, argv[2]) == 0)
			chop(0, aver(argv[1]));
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
