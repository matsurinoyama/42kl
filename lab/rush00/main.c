#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char start, char mid, char end, int col_count)
{
	ft_putchar(start);
	while (--col_count > 1)
		ft_putchar(mid);
	if (col_count)
		ft_putchar(end);
}

void	rush(int x, int y)
{
    int i;

    i = 0;
    if (x <= 0 || y <= 0)
	{
		write(1, "Invalid input.\n", 15);
	}
    if  (x > 0 && y > 0)
	{	
		while (i < y)
		{
			if (i == 0)
				ft_putline('A', '-', 'B', x);
			else if (i == y - 1)
				ft_putline('C', '-', 'D', x);
			else
				ft_putline('|', ' ', '|', x);
			i++;
			write(1, "\n", 1);
		}
	}
}

int main(void)
{
    rush(5, 3);
    return  (0);
}
