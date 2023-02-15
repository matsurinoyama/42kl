/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:16:28 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/13 15:23:49 by mbin-fad         ###   ########.fr       */
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

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	if (argc != 3)
	{
		fprintf (stderr, 
		"Error! Please input two numbers after ./a.out.\n");
		exit (1);
	}

	a = atoi (argv[1]);
	b = atoi (argv[2]);
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("A = %d, B = %d\n", a, b);
}
*/