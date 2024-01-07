/*
---------------------------Let's make some examples:-------------------
✌️ BINARY
  Suppose we wont to write the decimal value 42 using a binary base system 
  --> base = (1,0). 
  The result will be --> 1 0 1 0 1 0

  But why? 
  Couse we are using powers of 2!
  1 0 1 0 1 0 = 1(2^5)+0(2^4)+1(2^3)+0(2^2)+1(2^1)+0(2^0) = 42 ✌️


🐙 OCTAL BASE 
  Suppose we wont to write the decimal value 42 using an octal base system
  --> base = (p,o,n,e,y,v,i,f). 
  The result will be --> vn
   
   Same logic
   - The symbol "v" corrisponds to the value 5  (p = 0, 0 = 1, n = 2, ...)
   - The symbol "n" corrisponds to the value 2.
   So:
   vn = 5(8^1) + 2(8^0) = 42 🐙

------------------------(similarly 42 = 4(10^1) + 2(10^0))-----------------*/

#include <unistd.h>
#include <stdio.h>

/*--------------------------------PROTORYPES------------------------------*/
void  ft_putnbr_base(int, char *);
void  ft_putchar(char);
void  convert_nbr(int, int, char *);
int   check_double(char *);

/*----------------------------------MAIN----------------------------------*/
int main(void)
{
  int   n;
  char  *base_symbols;

  n = -42;
  base_symbols = "0123456789abcdef";
  ft_putnbr_base(n, base_symbols);
}

/*--------------------------------FUNCIOTNS-------------------------------*/
void  ft_putnbr_base(int nbr, char *base)
{
  int base_value;

  base_value = 0;

  /*preliminary checks + base_value lenght*/
  while (base[base_value])
  {
    if (base[base_value] == '+' || base[base_value] == '-')
      return;
    ++base_value;  
  }
  if (base_value <= 1)
    return;
  if (check_double(base))
    return;  

  /*checks passed*/
  convert_nbr(nbr, base_value, base);  
}

void  convert_nbr(int n, int base_value, char *symbols)
{
    long  nlong;
    
    nlong = n;
    if (nlong < 0)
    {
      nlong = -nlong;
      ft_putchar('-');
    }
    
    if(nlong >= base_value)
      convert_nbr(nlong / base_value, base_value, symbols);
    ft_putchar(symbols[nlong % base_value]);
}

int check_double(char *symbols)
{
  int i;
  int j;

  i = 0;
  while (symbols[i])
  {
    j = i + 1;
    while (symbols[j])
    {
      if (symbols[i] == symbols[j])
        return (1);
        j++;
    }
    i++;
  }
  return (0);
}

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

