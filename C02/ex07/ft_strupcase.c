/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:06:00 by candrade          #+#    #+#             */
/*   Updated: 2021/03/10 15:35:17 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
         if (str[i] >= 'a' && str[i] <= 'z')
         str[i] = str[i] - 'a' + 'A';
         i++;
    }
    return(str);
}

int main()
{
    char    v[] = "bollito de ASASJa";
    printf("%s" ,ft_strupcase(v));
}