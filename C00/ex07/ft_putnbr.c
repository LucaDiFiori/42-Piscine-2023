#include <unistd.h>

void	ft_putchar(char);
void	ft_putnbr(int);

/*int main()
{
	ft_putnbr(42);
}*/

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
        if (nb < -9)
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