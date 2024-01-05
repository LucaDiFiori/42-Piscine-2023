/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:52:20 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/06 19:58:18 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
    char    *base;

    base = "0123456789abcdef";
    while (*str)
    {
        if ((*str >= 0 && *str <= 31) || *str == 127)
        {
            ft_putchar('\\');
            ft_putchar(base[(*str / 16)]);
            ft_putchar(base[(*str++ % 16)]);
        }
        else
            ft_putchar(*str++);
    }
}

/*#include <stdio.h>
int main()
{
    char *str = "Hi \nmate";
    printf("%s \n", str);
    ft_putstr_non_printable(str);
}*/