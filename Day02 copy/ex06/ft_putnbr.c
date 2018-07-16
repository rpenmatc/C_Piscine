#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c,1);
    return(0);
}

int find_digit(int n, int number)
{    
    i = 1
    while(i < n)
    {
        number /= 10
        i++;
    }
    return 0;
}

int length_of_numbers(int number)
{  
    int i = 0
    if (number > 0)
    {
        number /= 10;
        i++;
        return i;
    } 
    if else (number < 0)
    {
        
    } 
    else 
    {
        return 0;
}
}


void ft_putnbr(int nb)
 {
     length = length_of_numbers
      if (n==0)
      {
          ft_putchar('0');
          ft_putchar('\n');
          return;
      } 
      else if (n < 0)
      {
          ft_putchar('-')
          n *= -1;
      }
}


int main() {
    ft_putnbr(10);
    return(0);
} 