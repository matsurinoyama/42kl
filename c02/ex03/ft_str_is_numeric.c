#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (str[i] < '0' || str[i] > '9')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf (stderr, 
		"Error! Please input a string in quotes after ./a.out.\n");
		exit (1);
	}

	printf("INPUT:\n");
	printf("%s\n", argv[1]);
	printf("\n");

	printf("ALL NUMERICAL?:\n");
	if (ft_str_is_numeric(argv[1]) == 1)
	{
		printf("YES (%d)\n", ft_str_is_numeric(argv[1]));
	}
	else
	{
		printf("NO (%d)\n", ft_str_is_numeric(argv[1]));
	}
}
*/