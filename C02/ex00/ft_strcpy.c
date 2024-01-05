/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:33:42 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/06 15:26:01 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
    char    *str;
    char    *src;

    src = "Hello";
    ft_strcpy(str, src);
    
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}*/