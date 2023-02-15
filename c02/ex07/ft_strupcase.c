#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
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

	printf("BEFORE:\n");
	printf("%s\n", argv[1]);
	printf("\n");

	printf("AFTER:\n");
	printf("%s\n", ft_strupcase(argv[1]));
}
*/