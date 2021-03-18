/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:21:35 by candrade          #+#    #+#             */
/*   Updated: 2021/03/16 15:48:12 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (to_find[j] != 0)
	{
		j++;
	}
	while (str[i] != 0)
	{
		to_find[j] = str[i];
		i++;
	}
	to_find[j] = 0;
	printf("%s", to_find);
	return (to_find);
}

int main(void)
{
	char	here[20] = "Ensalada";
	char	busca[7] = "lada";
	//char	*ptr;

	ft_strstr(here, busca)*ptr = strstr(here, busca);
	printf("%s", ptr);
	return (0);*/

i}
