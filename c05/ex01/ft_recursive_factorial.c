/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:07:41 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/28 16:11:49 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
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
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
}
*/