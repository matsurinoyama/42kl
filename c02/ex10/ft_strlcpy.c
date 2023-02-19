/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:49:56 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/16 13:49:59 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (src[result])
	{
		result++;
	}
	if (size == 0)
	{
		return (result);
	}
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf (stderr, 
		"Error! Please input two strings in quotes and one number after ./a.out.\n");
		exit (1);
	}

	printf("BEFORE:\n");
	printf("%s\n", argv[2]);
	printf("\n");

	printf("AFTER:\n");
	printf("(%d) ", ft_strlcpy(argv[2], argv[1], atoi (argv[3])));
	printf("%s\n", argv[2]);	
}
*/
