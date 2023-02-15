/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:26:12 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/13 15:28:53 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int	a;
	int	b;
	int mod;
	int div;

	if (argc != 3) {
		fprintf (stderr, 
		"Error! Please input two numbers after ./a.out.\n");
		exit (1);
	}

	a = atoi (argv[1]);
	b = atoi (argv[2]);
	ft_div_mod(a, b, &div, &mod);
	printf("A = %d, B = %d\n\nA ÷ B = %d\nA mod B = %d\n", a, b, div, mod);
}
*/