/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:46:02 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/05 11:04:34 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <stdio.h>
int main(void)
{
    char    *string;
    
    string = "Hello";
    printf("ft_strlen returns the number of characters");
    printf(" the terminatore will not be taken into account: %d\n", ft_strlen(string));
}*/