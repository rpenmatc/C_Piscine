#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_putstr(char *c)
{
    while (1)
    {
        if (*c == '\0')
        {
            break;
        }
        ft_putchar(*c);
        c++;
    }
    return 0;
}
void ft_print_comb(void)
{
    int i = 0;
    while (i <= 9)
    {
        int j = i + 1;
        while (j <= 9)
        {
            int g = j + 1;
            while (g <= 9)
            {
                char a[] = {i + '0', j + '0', g + '0', '\0'};
                ft_putstr(a);
                if (i != 7)
                {
                    ft_putchar(',');
                }
                g++;
            }
            j++;
        }
        i++;
    }
    ft_putchar('\n');
}
int main()
{
    ft_print_comb();
    return (0);
}