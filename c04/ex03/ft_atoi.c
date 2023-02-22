#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	multi;
	int	num;

	i = 0;
	multi = 1;
	num = 0;
	while ((str[i] > '0' && str[i] < '9')
		|| str[i] == '-' || str[i] == '+' || str[i] == ' ')
	{
		if (str[i] == '-')
		{
			multi *= -1;
		}
		if (str[i] > '0' && str[i] < '9')
		{
			num = (num * 10) + (str[i] - '0');
		}
		i++;
	}
	num *= multi;
	return (num);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, 
		"Usage: %s <Number>\n", argv[0]);
		exit (1);
	}

	ft_putnbr(ft_atoi(argv[1]));
}
*/