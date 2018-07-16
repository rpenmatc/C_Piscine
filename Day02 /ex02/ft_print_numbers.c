#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_print_numbers(void)
{
	int i;
	i = 1;
	while (i <= 9)
	{
		ft_putchar(i + '0');
		i++;
	}
}
int main()
{
	ft_print_numbers();
	return (0);
}