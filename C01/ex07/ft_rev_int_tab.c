/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:32:43 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/05 12:16:54 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size -1;
	while(start < end)
	{
		temp = tab[start];
		tab[start++] = tab[end];
		tab[end--] = temp;
    }
}

/*#include <stdio.h>
int main()
{
	int i = -1;
	int tab[4] = {1, 4, 2, 7};
	
    ft_rev_int_tab(tab, 4);
	
    while (++i < 4)
		printf("%d ", tab[i]);
}*/