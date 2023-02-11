#include <unistd.h>

void	ft_putchar(char a[])
{
	if (a[0] == '9' && a[1] == '8' && a[3] == '9' && a[4] == '9')
	{
		write(1, a, 5);
		write(1, "\n", 1);
	}
	else
		write(1, a, 7);
}

void	ft_print_comb2(void)
{
	char	a[7];

	a[0], a[1], a[3], a[4] = '0';
	a[2], a[6] = ' ';
	a[5] = ',';
	while (a[0] <= '9')
	{
		while (a[1] <= '8')
		{
			while (a[3] <= '9')
			{
				while (a[4] <= '9')
				{
					ft_putchar(a);
					a[4]++;
				}
				a[3]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
