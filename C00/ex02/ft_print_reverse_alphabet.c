#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    let;

    let = 'z';
    while(let >= 'a')
    {
        write(1, &let, 1);
        let--;
    }
}

/*int main()
{
    ft_print_reverse_alphabet();
}*/