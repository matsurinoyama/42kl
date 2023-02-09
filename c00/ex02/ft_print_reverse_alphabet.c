/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:51:42 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/09 18:02:04 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c = '{';

	while (--c >= 'a')
	{
		write(1, &c, 1);
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}
