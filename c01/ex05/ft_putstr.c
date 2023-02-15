/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:34:48 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/13 15:45:20 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
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
	
	ft_putstr(argv[1]);
}
*/