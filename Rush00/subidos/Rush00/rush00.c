/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irueda-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:15:37 by irueda-g          #+#    #+#             */
/*   Updated: 2021/02/28 18:56:09 by irueda-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rform(int c, int r, int x, int y);

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
				rform(c, r, x, y);
			}
			ft_putchar('\n');
		}
	}
	else
		write(1, "Value is negative or nule. Must be > 0\n", 39);
}

void	rform(int c, int r, int x, int y)
{
	if (c == 1 || c == y)
		if (r == 1 || r == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	else if (r == 1 || r == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}
