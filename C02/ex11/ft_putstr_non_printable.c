/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:07:17 by candrade          #+#    #+#             */
/*   Updated: 2021/03/16 16:37:15 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexadecimal(int m)
{
	char	*h;
	int		a;
	int		b;

	h = "0123456789abcdf";
	a = h[m / 16];
	b = h[m % 16];
	ft_putchar('\\');
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
			hexadecimal(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char v[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(v);
}
