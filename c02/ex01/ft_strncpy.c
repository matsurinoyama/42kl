#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf (stderr, 
		"Error! Please input two strings in quotes and one number after ./a.out.\n");
		exit (1);
	}

	printf("BEFORE:\n");
	printf("%s\n", argv[2]);
	printf("\n");

	printf("AFTER:\n");
	printf("%s\n", ft_strncpy(argv[2], argv[1], atoi (argv[3])));	
}
*/