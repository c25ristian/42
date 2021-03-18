/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrade <candrade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:13:54 by candrade          #+#    #+#             */
/*   Updated: 2021/03/10 11:52:16 by candrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] - 'A' + 'a';
        if ()
    i++;
    }
    return(str);
}

int main()
{
    char    v[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s" ,ft_strlowcase(v));
}