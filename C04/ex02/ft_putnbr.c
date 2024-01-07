/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:44:25 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/12 10:25:55 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
        if (nb < - 9)
            ft_putnbr(- (nb / 10));
		ft_putnbr(- (nb % 10));
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

/*int main()
{
	ft_putnbr(-2147483648);
}*/