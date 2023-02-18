#include <unistd.h>
#include <stdlib.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
	}
	return (result);
}

int	ft_solve(int arr[])
{
	int i;
	int j;
	int arr[16];

	/* arr[16] = { 4, 3, 2, 1,
				   1, 2, 2, 2, 4 3 2 1 1 2 2 2" | cat -e
	}*/

	while (arr[i] <= arr[16])
	{
		if (arr[i] == 1)
		{
			ft_putchar('4')
			j++
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}

	ft_solve(ft_atoi(argv[1]));
}

