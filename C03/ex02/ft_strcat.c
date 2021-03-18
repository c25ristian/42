/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:12:05 by candrade          #+#    #+#             */
/*   Updated: 2021/03/18 19:17:32 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
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
	char v[28] = "Piña";
	char o[28] = "Colada";
	//char *p;

	ft_strcat(v, o);
	/*p = strcat(v, o);
	printf("%s", v);
	return (*v);*/
}
