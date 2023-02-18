/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:49:37 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/16 13:49:43 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf (stderr, 
		"Error! Please input two strings in quotes after ./a.out.\n");
		exit (1);
	}

	printf("BEFORE:\n");
	printf("%s\n", argv[2]);
	printf("\n");

	printf("AFTER:\n");
	printf("%s\n", ft_strcpy(argv[2], argv[1]));	
}
*/
