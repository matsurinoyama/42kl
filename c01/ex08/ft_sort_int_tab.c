#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	step1;
	int	step2;

	step1 = 0;
	while (step1 < size)
	{
		step2 = 0;
		while (step2 < size)
		{
			if (tab[step1] < tab[step2])
			{
				ft_swap(&tab[step1], &tab[step2]);
			}
			step2++;
		}
		step1++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int	v[10];
	int nmax;

	if (argc != 2)
	{
		fprintf (stderr, 
		"Error! Please input one random number after ./a.out.\n");
		exit (1);
	}

	nmax = atoi(argv[1]);
	for (int i=0; i<10; ++i)
	{
		v[i] = rand()%(nmax + 1);	
	}

	printf("BEFORE:\n");
	for (int i=0; i<10; i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
		
	ft_sort_int_tab(v, sizeof(v)/sizeof(v[0]));

	printf("\nAFTER:\n");
	for (int i=0; i<10; i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
	
}
*/