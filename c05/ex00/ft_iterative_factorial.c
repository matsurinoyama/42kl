/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:07:41 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/23 12:07:43 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i >= 1)
	{
		result *= i;
		i--;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main (int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, 
		"Usage: %s <Number>\n", argv[0]);
		exit (1);
	}

	printf("FACTORIAL OF %s IS: ", argv[1]);
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
}
*/