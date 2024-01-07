/*-------------Convert n in a given base system----------*/

/*-------------------------NOTE-1---------------------------
Using recursion i can write my number starting from the bottom
to the top. 
If I had used an iterative procedure like so:
while(n){
    printf("%d", n%base_value);
    n /= base_value;
}
I would have printed thevalue in reverse order. 
------------------------------------------------------------*/
#include <unistd.h>
#include <stdio.h>

void    conv_nb_to_base(int nb, int base_value, char *base_symbols)
{
    if (nb > base_value)
        conv_nb_to_base(nb / base_value, base_value, base_symbols);
    printf("%c", base_symbols[nb % base_value]);    
}

int main()
{
    int n;
    int base_value;
    char *base_symbols;

    n = 2147483647;
    base_value = 16;
    base_symbols = "0123456789ABCDEF";
    conv_nb_to_base(n, base_value, base_symbols);
}