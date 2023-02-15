#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char copy[] = "Dad, I'm hungry.";
	char paste[] = "Hi Hungry, I'm Dad.";
	
	printf("%s\n", ft_strcpy(paste, copy));	
}
*/