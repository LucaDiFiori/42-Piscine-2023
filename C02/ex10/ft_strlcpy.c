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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
int main()
{
    char *src = "Hi mate";
    char dest[3] = {0};
    int i = 0;

    printf("%d\n",  ft_strlcpy(dest, src, sizeof(dest)));
    while(i < sizeof(dest))
    {
        write(1, &dest[i], 1);
        write(1, " ", 1);
        if(dest[i] == '\0')
            write(1, "_", 1);
        i++;    
    }
}*/