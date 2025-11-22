/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:06:34 by doabrour          #+#    #+#             */
/*   Updated: 2025/07/25 10:23:30 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	len(char *base)
{
	int	lenght;

	lenght = 0;
	while (base[lenght])
	{
		lenght++;
	}
	return (lenght);
}

int	check_duplicate_characters(char *base)
{
	int	index;
	int	indexj;

	index = 0;
	while (base[index])
	{
		indexj = index + 1;
		while (base[indexj])
		{
			if (base[indexj] == base[index])
			{
				return (0);
			}
			indexj++;
		}
		index++;
	}
	return (1);
}

int	check_operateurs(char *base)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		index++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;

	lnbr = nbr;
	if (len(base) < 2 || check_operateurs(base) == 0 \
		|| check_duplicate_characters(base) == 0)
	{
		return ;
	}
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = lnbr * (-1);
	}
	if (lnbr >= len(base))
	{
		ft_putnbr_base((lnbr / len(base)), base);
		ft_putchar((base[lnbr % len(base)]));
	}
	else if (lnbr < len(base))
	{
		ft_putchar((base[lnbr % len(base)]));
	}
}
/*int main(void)
{
    char *base = "01";
    ft_putnbr_base(3, base);
}*/
