/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:10:43 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/12 18:44:30 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

/*#include <stdio.h>

int main()
{
    int nbr;
    int power;

    nbr = 3;
    power = 3;
    printf("%d", ft_recursive_power(nbr, power));
}*/