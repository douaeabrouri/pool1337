/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:51:33 by doabrour          #+#    #+#             */
/*   Updated: 2025/08/04 15:22:48 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_duplicate_characters(char *base);
int	check_operateurs(char	*base);

int	ft_len(char *base)
{
	int		lenght;

	lenght = 0;
	while (base[lenght])
		lenght++;
	return (lenght);
}

char	*ft_putnbr_base(int nbr, char *base, int *index, char *tmp)
{
	long	lnbr;

	lnbr = nbr;
	if (ft_len(base) < 2 || check_operateurs(base) == 0 \
		|| check_duplicate_characters(base) == 0)
		return (NULL);
	if (lnbr < 0)
	{
		tmp[(*index)] = '-';
		lnbr = lnbr * (-1);
		(*index)++;
	}
	if (lnbr >= ft_len(base))
	{
		ft_putnbr_base((lnbr / ft_len(base)), base, index, tmp);
		tmp[(*index)] = base[lnbr % ft_len(base)];
	}
	else if (lnbr < ft_len(base))
		tmp[(*index)] = base[lnbr % ft_len(base)];
	(*index)++;
	return (tmp);
}

int	find_char(char r, char *base)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (r == base[index])
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	index;
	int	nbr;

	if (check_operateurs(base) == 0 || \
			check_duplicate_characters(base) == 0 || ft_len(base) < 2)
		return (0);
	index = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	sign = 1;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = sign * (-1);
		index++;
	}
	nbr = 0;
	while (find_char(str[index], base) != -1)
	{
		nbr = nbr * ft_len(base);
		nbr += find_char(str[index], base);
		index++;
	}
	return (nbr * sign);
}
