/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:43:05 by candrade          #+#    #+#             */
/*   Updated: 2021/03/16 15:55:11 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	while (j < i && j < size -1)
	{
		dest[i] = src[i];
		j++;
	}

	dest[j] = '\0';
	return (i);
}

int	main(void)
{
	char a[] = "";
	char b[] = "palmera";
	
	//int resultado = strlcpy(a, b, 8);

	ft_strlcpy(a, b, 13);
	printf("%s", a);

	printf("%d", ft_strlcpy(a, b, 13));
}
