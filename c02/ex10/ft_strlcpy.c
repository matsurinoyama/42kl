/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:49:56 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/21 13:47:09 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strsize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strsize(dest);
	j = 0;
	if (!dest || !src)
	{
		return (ft_strsize(src));
	}
	if (size > i)
	{
		while (src[j] && j < (size - 1))
		{
			dest[j] = src[j];
			i++;
			j++;
		}
	}
	dest[j] = '\0';
	return (i);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, 
		"Usage: %s <Dest. String> <Src. String> [<Src. Length>]\n", argv[0]);
		exit (1);
	}

	printf("BEFORE:\n");
	printf("%s\n", argv[1]);
	printf("\n");

	printf("AFTER:\n");
	printf("(%d) ", ft_strlcpy(argv[1], argv[2], atoi (argv[3])));
	printf("%s\n", argv[2]);	
}
*/