#include <unistd.h>

void    ft_print_alphabet(void)
{
    char let;

    let = 'a';
    while(let <= 'z')
    {
        write(1, &let, 1);
        let++;
    }    
}

/*int main()
{
    ft_print_alphabet();
}*/