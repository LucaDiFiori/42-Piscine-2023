#include <unistd.h>

void    ft_putchar(char);
void    ft_print_comb2(void);
char    ft_convert(int);

/*int main()
{
    ft_print_comb2();
}*/

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_convert(int nb)
{
    return (nb + '0');
}

void    ft_print_comb2(void)
{
    int right_digits;
    int left_digits;

    left_digits = 0;
    while (left_digits <= 98)
    {
        right_digits = left_digits + 1;
        while (right_digits <= 99)
        {
            ft_putchar(ft_convert(left_digits / 10));
            ft_putchar(ft_convert(left_digits % 10));
            ft_putchar(' '); 
            ft_putchar(ft_convert(right_digits / 10));
            ft_putchar(ft_convert(right_digits % 10));
                if (left_digits != 98)
                {
                    ft_putchar(',');
                    ft_putchar(' '); 
                    }
            right_digits++;
        }
    left_digits++; 
    }
}