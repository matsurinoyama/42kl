/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:34:48 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/13 16:26:57 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != 0)
	{
		str++;
		++size;
	}
	return (size);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf (stderr, 
		"Error! Please input a string in quotes after ./a.out.\n");
		exit (1);
	}

	printf("CHARACTER COUNT: %d\n", ft_strlen(argv[1]));
}
*/