/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:48:09 by candrade          #+#    #+#             */
/*   Updated: 2021/03/16 15:51:36 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *scr)
{
	int i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	printf("%s\n", dest);
//	printf("%s\n", scr);
	return (dest);
}

int	main()
{
	char a[30]="en esta";
	char b[30]="copiame esta";

 	ft_strcpy(&a[0], &b[0]);

}
