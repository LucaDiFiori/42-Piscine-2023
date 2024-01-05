/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:17:00 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/06 15:54:09 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i])
			dest[i] = src[i++];
		else
			dest[i++] = '\0';
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
    char    *str;
    char    *src;
    unsigned int n;
    int i;

    i = 0;
    n = 11;
    src = "Hello";
    ft_strncpy(str, src, n);
    
    while (i < n)
    {
        write(1, str, 1);
        if (*str == '\0')
            write(1," _",2);
        i++;
        str++;
    }
} */ 