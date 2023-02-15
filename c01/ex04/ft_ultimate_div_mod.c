/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:29:53 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/13 15:34:21 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result_div;
	int	result_mod;

	result_div = *a / *b;
	result_mod = *a % *b;
	*a = result_div;
	*b = result_mod;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	if (argc != 3)
	{
		fprintf (stderr, 
		"Error! Please input two random numbers after ./a.out.\n");
		exit (1);
	}

	a = atoi (argv[1]);
	b = atoi (argv[2]);
	ptra = &a;
	ptrb = &b;
	ft_ultimate_div_mod(ptra, ptrb);
	printf("A ÷ B = %d\nA mod B = %d\n", a, b);
}
*/