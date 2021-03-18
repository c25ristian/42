/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:15:16 by candrade          #+#    #+#             */
/*   Updated: 2021/03/08 12:08:51 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b,
	*mod = a % b;
}

int main()
{	
	int a;
	int b;
	int division;
	int modulo;

	a = 401;
	b = 5;
	division = 0;
	modulo = 0;
	printf("division:  %d, modulo: %d \n",division, modulo);
	ft_div_mod(a, b, &division, &modulo);
	printf("division:  %d, modulo: %d",division, modulo);
}
