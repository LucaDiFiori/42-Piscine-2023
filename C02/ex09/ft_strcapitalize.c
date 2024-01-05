/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:52:20 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/06 19:58:18 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int     check_if_alpha_num(char c)
{
    if ((c >= '0' && c <= '9') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z'))
            return (1);
    else
            return (0);        
}

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
   while (str[i])
    {
        while ((!(check_if_alpha_num(str[i]))) && str[i])
            i++;
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 32);
        i++;
        while (check_if_alpha_num(str[i]) && str[i])
              {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = (str[i] + 32);
                i++;    
              }        
    }
    return(str);
}

#include <stdio.h> 
int main()
{
    char str[100] = "   salut, comment tu vas  ? 42mots quarante-deux;  cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}