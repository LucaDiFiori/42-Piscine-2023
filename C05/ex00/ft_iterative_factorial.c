/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:59:52 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/12 14:19:09 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < nb)
		temp *= i++;
	return (temp);
}

/*#include <stdio.h>

int main()
{
    int nbr;

    nbr = 5;
    printf("%d", ft_iterative_factorial(nbr));
}*/