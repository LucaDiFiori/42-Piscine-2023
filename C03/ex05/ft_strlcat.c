/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:58:49 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/10 15:58:12 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
        count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	dest_len;
	unsigned int	src_len;
    unsigned int	total_len;
    unsigned int    i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    total_len = dest_len + src_len;
    if (size <= dest_len || size == 0)
        return (total_len - (dest_len - size));
    i = dest_len;
    while (i < size - 1 && src[i - dest_len])
    {
        dest[i] = src[i - dest_len];
        i++;
    }
    dest[i] = '\0';  
    return (total_len); 
}


/*#include <stdio.h>
#include <string.h>
int main() {
    char dest[20] = "Hello";
    char *src = " World!";
    unsigned int size = sizeof(dest);

    printf("Result: %s\n", dest);
    printf("Total Length ft_strlca: %d\n", ft_strlcat(dest, src, size));
    printf("Total Length strlca: %d\n", strlcat(dest, src, size));
}*/