#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <String> <String to Find>\n", argv[0]);
		exit (1);
	}

	printf("%s\n", strstr(argv[1], argv[2]));
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	char str1[30] = "Learing C is awesome";
	char str2[15] = "C";
	int i, j, k, m, count = 0;
	for (i = 0; str2[i] != '\0'; i++)
	{
		// to find the length of str2
	}
	for (j = 0; str1[j] != '\0'; j++)
	{
		if (str1[j] == str2[0])
		{
			for (k = 0; k < i; k++)
			{
				if (str1[j] == str2[k])
				{
					j++;
					count++;
				}
			}
			if (count == i)
			{
				for (m = j - i; str1[m] != '\0'; m++)
					printf("%c", str1[m]);
			}
		}
	}
	return 0;
}