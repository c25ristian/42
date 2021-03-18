/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:35:41 by candrade          #+#    #+#             */
/*   Updated: 2021/03/16 17:14:30 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	nb--;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i <= nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	printf("%s", dest);
	return (dest);
}

int	main(void)
{
	char v[19] = "Piña";
	char o[19] = "Colada";
	//unsigned int n;
	//char *p;

	//n = 2;
	ft_strncat(v, o, 1);
	//p = strncat(v, o, 2);
	//printf("%s", v);
	//return (*v);
}
