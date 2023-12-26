#include <unistd.h>

void    ft_putchar(char);
void    ft_print_comb(void);

/*int main()
{
    ft_print_comb();
}*/

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    char    first_dgt;
    char    second_dgt;
    char    third_dgt;

    first_dgt = '0';
    while (first_dgt <= '7')
    {
        second_dgt = first_dgt + 1;
        while (second_dgt <= '8')
        {
            third_dgt = second_dgt + 1;
            while (third_dgt <= '9')
            {
                ft_putchar(first_dgt);
                ft_putchar(second_dgt);
                ft_putchar(third_dgt);
                if (first_dgt != '7')
                    write(1, ", ", 2);
                third_dgt++;            
            }
            second_dgt++;
        }
        first_dgt++;
    }

}
        