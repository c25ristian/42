/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:51:43 by candrade          #+#    #+#             */
/*   Updated: 2021/03/06 11:15:42 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void 	ft_ultimate(int *********nbr)
{
	*********nbr = 42;
	printf("%d\n", *********nbr);
}

int 	main(void)
{
	int v;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	
	v = 5;
	nbr1 = &v;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
    nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	ft_ultimate(&nbr8);
}
