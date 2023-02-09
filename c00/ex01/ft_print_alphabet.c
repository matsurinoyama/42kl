/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:36:14 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/09 18:07:33 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char c = '`';
	while (++c <= 'z')
		write(1, &c, 1);
}

int main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
}
