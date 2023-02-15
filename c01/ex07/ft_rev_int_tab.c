/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:28:26 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/13 16:59:22 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	swaps;
	int	i;

	i = 0;
	swaps = size / 2;
	while (swaps--)
		ft_swap(&tab[i++], &tab[--size]);
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
		
	ft_rev_int_tab(v, sizeof(v)/sizeof(v[0]));

	printf("\nAFTER:\n");
	for (int i=0; i<10; i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
	
}
*/