/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irueda-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:15:37 by irueda-g          #+#    #+#             */
/*   Updated: 2021/02/28 19:49:08 by irueda-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	hl(int r, int x);

void	rush(int x, int y)
{
	int c;
	int r;

	if (x > 0 && y > 0)
	{
		c = 0;
		while (c++ < y)
		{
			r = 0;
			while (r++ < x)
			{
				if (c == 1 || c == y)
					hl(r, x);
				else if (r == 1 || r == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
	else
		write(1, "Value is negative or nule.Muste be > 0\n", 39);
}

void	hl(int r, int x)
{
	if (r == 1)
		ft_putchar('A');
	else if (r == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}
