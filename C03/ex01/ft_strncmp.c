/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:08:25 by candrade          #+#    #+#             */
/*   Updated: 2021/03/18 19:11:47 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	n--;
	while (i <= n)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		i++;
	}
	return j;
}

int	main(void)
{
	char a[] = "ooJijo";
	char b[] = "ooJjij";

	ft_strncmp(a, b, 3);

	printf("%d", ft_strncmp(a, b, 3));
	printf("%d", strncmp(a, b, 3));
}
