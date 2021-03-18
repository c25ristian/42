/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:21:09 by candrade          #+#    #+#             */
/*   Updated: 2021/03/10 16:34:59 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&  (str[i - 1] >= 32 && str[i - 1] <= 47))
		 	str[i] = str[i] - 'a' + 'A';
		 else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] >= 58 && str[i - 1] <= 64))
		 	str[i] = str[i] - 'a' + 'A';
		 else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] >= 91 && str[i - 1] <= 96))
		 	str[i] = str[i] - 'a' + 'A';
		 else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] >= 123 && str[i - 1] <= 126))
		 	str[i] = str[i] - 'a' + 'A';
		 else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == 0))
		 	str[i] = str[i] - 'a' + 'A';
		 else if ((str[i] >= 'A' && str[i] <= 'Z') &&  (str[i - 1] >= 'a'  && str[i - 1] <= 'z'))
		 	str[i] = str[i] - 'A' + 'a';
		 else if ((str[i] >= 'A' && str[i] <= 'Z') &&  (str[i - 1] >= 'A'  && str[i - 1] <= 'Z'))
		 	str[i] = str[i] - 'A' + 'a';
		 else if ((str[i] >= 'A' && str[i] <= 'Z') &&  (str[i - 1] >= '0'  && str[i - 1] <= '9'))
		 	str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return(str);
}

int main(void)
{
	char    v[] = "Salut, comment tu vas ? 42mots quArante-deux; cinquante+et+un";
	printf("%s" ,ft_strlowcase(v));
}