#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, 
		"Usage: %s <String>\n", argv[0]);
		exit (1);
	}

	printf("INPUT: %s\n", argv[1]);
	printf("CHARACTER COUNT: %d\n", ft_strlen(argv[1]));
}
*/