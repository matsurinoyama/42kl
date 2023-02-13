#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// A function to implement bubble sort
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
