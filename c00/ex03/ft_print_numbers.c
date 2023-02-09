/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:03:19 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/09 18:13:29 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	char n = '/';
	while (++n <= '9')
		write(1, &n, 1);
}

int main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
}	
