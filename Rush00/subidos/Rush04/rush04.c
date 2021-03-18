/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irueda-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:15:37 by irueda-g          #+#    #+#             */
/*   Updated: 2021/02/28 19:13:39 by irueda-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	hl(int c, int r, int x, int y);

void	rush(int x, int y)
{
	int	c;
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
					hl(c, r, x, y);
				else if (r == 1 || r == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
	else
		write(1, "Value is negative or nule. Must be > 0\n", 39);
}

void	hl(int c, int r, int x, int y)
{
	if (r > 1 && r < x)
		ft_putchar('B');
	else if ((c == 1 && r == 1) || (c == y && r == x))
		ft_putchar('A');
	else
		ft_putchar('C');
}
