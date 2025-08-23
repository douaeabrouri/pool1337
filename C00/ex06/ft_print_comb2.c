/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:13:56 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/17 13:32:01 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	xx1;
	int	xx2;

	xx1 = 0;
	while (xx1 <= 98)
	{
		xx2 = xx1 + 1;
		while (xx2 <= 99)
		{
			ft_putchar((xx1 / 10) + 48);
			ft_putchar((xx1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((xx2 / 10) + 48);
			ft_putchar((xx2 % 10) + 48);
			if (xx1 != 98)
				write(1, ", ", 2);
			xx2++;
		}
		xx1++;
	}
}
